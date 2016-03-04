//
//  AttackArea.cpp
//  
//
//  Created by Jason Xu on 15/7/16.
//
//

#include "AttackArea.h"


AttackArea::AttackArea()
: _borderWidth(0)
, _bClose(false){
    _color.r = 0;
    _color.g = 0;
    _color.b = 0;
    _color.a = 255;

    _bWind = false;
    _currentData = &_drawData[0];
    _currentData->_radiusx = 0;
    _currentData->_radiusy = 0;
    _currentData->_drawType = NVGDrawType_None;
}

AttackArea::~AttackArea() {
    
}

AttackArea* AttackArea::create() {
    AttackArea* ret = new (std::nothrow) AttackArea();
    if (ret && ret->init())
    {
        ret->autorelease();
    }
    else
    {
        CC_SAFE_DELETE(ret);
    }
    
    return ret;
}

void AttackArea::_drawPath(NVGcontext *nvg, Size visibleSize, NVGPathData &data){
    switch (data._drawType) {
        case NVGDrawType_Point: {
            for (int i = 0; i < data._points.size(); i++) {
                const Point pos = convertToWorldSpace(*data._points.at(i));
                nvgCircle(nvg, pos.x, visibleSize.height - pos.y, 1);
            }
            break;
        }
        case NVGDrawType_Line: {
            if (data._points.size() < 2) {
                break;
            }
            const Point pos0 = convertToWorldSpace(*data._points.at(0));
            nvgMoveTo(nvg, pos0.x, visibleSize.height - pos0.y);
            for (int i = 1; i < data._points.size(); i++) {
                const Point pos1 = convertToWorldSpace(*data._points.at(i));
                nvgLineTo(nvg, pos1.x, visibleSize.height - pos1.y);
            }
            if (_bClose) {
                nvgClosePath(nvg);
            }
            break;
        }
        case NVGDrawType_Rect: {
            for (int i = 0; i < data._rects.size(); i++) {
                const Point pos = convertToWorldSpace(data._rects.at(i)->origin);
                nvgRect(nvg, pos.x, visibleSize.height - pos.y - data._rects.at(i)->size.height, data._rects.at(i)->size.width, data._rects.at(i)->size.height);
            }
            break;
        }
        case NVGDrawType_RoundedRect: {
            for (int i = 0; i < data._rects.size(); i++) {
                const Point pos = convertToWorldSpace(data._rects.at(i)->origin);
                nvgRoundedRect(nvg, pos.x, visibleSize.height - pos.y - data._rects.at(i)->size.height, data._rects.at(i)->size.width, data._rects.at(i)->size.height, data._radiusx);
            }
            break;
        }
        case NVGDrawType_Ellipse: {
            for (int i = 0; i < data._points.size(); i++) {
                const Point pos = convertToWorldSpace(*data._points.at(i));
                nvgEllipse(nvg, pos.x, visibleSize.height - pos.y, data._radiusx, data._radiusy);
            }
            break;
        }
        case NVGDrawType_Bezier: {
            if (3 != data._points.size() && 4 != data._points.size()) {
                break;
            }
            const Point pos0 = convertToWorldSpace(*data._points.at(0));
            nvgMoveTo(nvg, pos0.x, visibleSize.height - pos0.y);
            if (3 == data._points.size()) {
                const Point pos1 = convertToWorldSpace(*data._points.at(1));
                const Point pos2 = convertToWorldSpace(*data._points.at(2));
                nvgQuadTo(nvg, pos1.x, visibleSize.height - pos1.y, pos2.x, visibleSize.height - pos2.y);
            } else {
                const Point pos1 = convertToWorldSpace(*data._points.at(1));
                const Point pos2 = convertToWorldSpace(*data._points.at(2));
                const Point pos3 = convertToWorldSpace(*data._points.at(3));
                nvgBezierTo(nvg, pos1.x, visibleSize.height - pos1.y, pos2.x, visibleSize.height - pos2.y, pos3.x, visibleSize.height - pos3.y);
            }

            break;
        }
        case NVGDrawType_Arc: {
            const Point pos = convertToWorldSpace(*data._points.at(0));
            nvgArc(nvg, pos.x, visibleSize.height - pos.y, data._radiusx, data._arc0, data._arc1, data._dir);
            break;
        }
        default: {
            break;
        }
    }
}

void AttackArea::onDraw(const Mat4 &transform, uint32_t flags) {
    auto visibleSize = Director::getInstance()->getVisibleSize();
    auto bStroke = false;
    NVGcontext *nvg = getNVGCtx();
    if (nullptr == nvg) {
        CCLOG("ERROR! AttackArea - onDraw nvg is null");
        return;
    }
    nvgBeginFrame(nvg, visibleSize.width, visibleSize.height, 1);
    
    //   [a c e]
    //   [b d f]
    //   [0 0 1]
    //nvgTransform(nvg, transform.m[0], transform.m[1], transform.m[4], transform.m[5], transform.m[12], transform.m[13]);

    nvgBeginPath(nvg);

    _drawPath(nvg, visibleSize, _drawData[0]);
    if (_bWind) {
        nvgPathWinding(nvg, NVG_HOLE);
        _drawPath(nvg, visibleSize, _drawData[1]);
    }

    if (_bFill && _colorFill.a >= 0) {
        nvgFillColor(nvg, _colorFill);
        nvgFill(nvg);
    }
    
    if (_borderWidth > 0 ) {
        nvgStrokeWidth(nvg, _borderWidth);
        bStroke = true;
    }
    if (_color.a >= 0) {
        nvgStrokeColor(nvg, _color);
        bStroke = true;
    }
    if (bStroke) {
        nvgStroke(nvg);
    }

    nvgEndFrame(getNVGCtx());
    
    GL::bindTexture2D(0);
    GL::enableVertexAttribs(GL::VERTEX_ATTRIB_FLAG_NONE);
    GL::useProgram(0);
}

void AttackArea::draw(Renderer *renderer, const Mat4 &transform, uint32_t flags) {
    _customCommand.init(_globalZOrder);
    _customCommand.func = CC_CALLBACK_0(AttackArea::onDraw, this, transform, flags);
    renderer->addCommand(&_customCommand);
}

void AttackArea::drawPoint(const Vec2& point, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Point;
    _currentData->_points.push_back(new Vec2(point));
    _currentData->_radiusx = 1;
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawPoints(const Vec2 *position, unsigned int numberOfPoints, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Point;
    for (int i = 0; i < numberOfPoints; i++, position++) {
        _currentData->_points.push_back(new Vec2(*position));
    }
    _currentData->_radiusx = 1;
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawLine(const Vec2 &origin, const Vec2 &destination, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Line;
    _currentData->_points.push_back(new Vec2(origin));
    _currentData->_points.push_back(new Vec2(destination));
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawRect(const Vec2 &origin, const Vec2 &destination, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_Rect;
    _currentData->_rects.push_back(new Rect(origin.x, origin.y, destination.x - origin.x, destination.y - origin.y));
    _color = clr4f2NVGClr(color);
}

void AttackArea::drawRoundedRect(const cocos2d::Vec2 &origin, const cocos2d::Vec2 &destination, float radius){
    _currentData->_points.clear();
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_RoundedRect;
    _currentData->_radiusx  = radius;
    _currentData->_rects.push_back(new Rect(origin.x, origin.y, destination.x - origin.x, destination.y - origin.y));
}

void AttackArea::drawPolygon(const Vec2 *poli, unsigned int numberOfPoints, bool closePolygon, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Line;
    for (int i = 0; i < numberOfPoints; i++, poli++) {
        _currentData->_points.push_back(new Vec2(*poli));
    }
    _currentData->_radiusx = 1;
    _color = clr4f2NVGClr(color);
    _bClose = closePolygon;
}

void AttackArea::drawCircle( const Vec2& center, float radius, float angle, unsigned int segments, bool drawLineToCenter, float scaleX, float scaleY, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Ellipse;
    _currentData->_points.push_back(new Vec2(center));
    _currentData->_radiusx = radius;
    _currentData->_radiusy = radius;
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawCircle(const Vec2 &center, float radius, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Ellipse;
    _currentData->_points.push_back(new Vec2(center));
    _currentData->_radiusx = radius;
    _currentData->_radiusy = radius;
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawEllipse(const cocos2d::Vec2 &center, float radiusX, float radiusY, const cocos2d::Color4F &color){
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Ellipse;
    _currentData->_points.push_back(new Vec2(center));
    _currentData->_radiusx = radiusX;
    _currentData->_radiusy = radiusY;
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

void AttackArea::drawQuadBezier(const Vec2 &origin, const Vec2 &control, const Vec2 &destination, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Bezier;
    _currentData->_points.push_back(new Vec2(origin));
    _currentData->_points.push_back(new Vec2(control));
    _currentData->_points.push_back(new Vec2(destination));
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

/** draw a cubic bezier curve with color and number of segments */
void AttackArea::drawCubicBezier(const Vec2 &origin, const Vec2 &control1, const Vec2 &control2, const Vec2 &destination, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Bezier;
    _currentData->_points.push_back(new Vec2(origin));
    _currentData->_points.push_back(new Vec2(control1));
    _currentData->_points.push_back(new Vec2(control2));
    _currentData->_points.push_back(new Vec2(destination));
    _color = clr4f2NVGClr(color);
    _colorFill.a = -1;
}

/** draw a dot at a position, with a given radius and color */
void AttackArea::drawDot(const Vec2 &pos, float radius, const Color4F &color) {
    drawCircle(pos, radius, color);
    _colorFill = clr4f2NVGClr(color);
    _bFill = true;
}

void AttackArea::drawRect(const Vec2 &lb, const Vec2 &lt, const Vec2 &rt, const Vec2& rb, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_Rect;
    _currentData->_rects.push_back(new Rect(lb.x, lb.y, rt.x - lb.x, rt.y - lb.y));
    _color = clr4f2NVGClr(color);
}

void AttackArea::drawSolidRect(const Vec2 &origin, const Vec2 &destination, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_Rect;
    _currentData->_rects.push_back(new Rect(origin.x, origin.y, destination.x - origin.x, destination.y - origin.y));
    _colorFill = clr4f2NVGClr(color);
    _bFill = true;
}

void AttackArea::drawSolidCircle(const Vec2& center, float radius, const Color4F &color) {
    drawCircle(center, radius, color);
    _colorFill = clr4f2NVGClr(color);
    _bFill = true;
}

/** draw a segment with a radius and color */
void AttackArea::drawArc(const Vec2 &pos, float radius, float a0, float a1, int dir, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Arc;
    _currentData->_points.push_back(new Vec2(pos));
    _currentData->_radiusx = radius;
    _color = clr4f2NVGClr(color);
    _currentData->_arc0 = nvgDegToRad(a0);
    _currentData->_arc1 = nvgDegToRad(a1);
    if (NVG_CW == dir) {
        _currentData->_dir = NVG_CW;
    } else {
        _currentData->_dir = NVG_CCW;
    }
}

void AttackArea::drawSolidPolygon(const Vec2 *verts, int count, const Color4F &color) {
    _currentData->_points.clear();
    _currentData->_drawType = NVGDrawType_Line;
    for (int i = 0; i < count; i++) {
        _currentData->_points.push_back(new Vec2(verts[i]));
    }
    _colorFill = clr4f2NVGClr(color);
    _bFill = true;
    _bClose = true;
}

void AttackArea::drawRect(const Rect &rect, const Color4F &color) {
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_Rect;
    _currentData->_rects.push_back(new Rect(rect));
    _color = clr4f2NVGClr(color);
}

void AttackArea::setColor(const Color4F &color) {
    _color = clr4f2NVGClr(color);
}

void AttackArea::setFillColor(const Color4F &color) {
    _colorFill = clr4f2NVGClr(color);
}

void AttackArea::setFill(bool bFill) {
    _bFill = bFill;
}

void AttackArea::setLineColor(const Color4F &color) {
    _color = clr4f2NVGClr(color);
}

void AttackArea::setLineWidth(float width) {
    _borderWidth = width;
}

void AttackArea::setRadius(float radius) {
    _currentData->_radiusx = radius;
}

void AttackArea::setOpacityf(float opacity) {
    _color.a = opacity;
    _colorFill.a = opacity;
}

void AttackArea::addPoint(const Vec2 &point) {
    _currentData->_points.push_back(new Vec2(point));
}

void AttackArea::setPoints(const Vec2 *poli, unsigned int numberOfPoints) {
    _currentData->_points.clear();
    for (int i = 0; i < numberOfPoints; i++, poli++) {
        _currentData->_points.push_back(new Vec2(*poli));
    }
}

void AttackArea::enablePathWind(){
    _bWind = true;
    _currentData = &_drawData[1];
}

/** Clear the geometry in the node's buffer. */
void AttackArea::clear() {
    _currentData->_points.clear();
    _currentData->_rects.clear();
    _currentData->_drawType = NVGDrawType_None;
    _colorFill.a = -1;
    _color.r = 0;
    _color.g = 0;
    _color.b = 0;
    _color.a = 255;
}

NVGcolor AttackArea::clr4f2NVGClr(Color4F clr) {
    NVGcolor nvgClr;
    nvgClr.a = clr.a;
    nvgClr.r = clr.r;
    nvgClr.g = clr.g;
    nvgClr.b = clr.b;
    
    return nvgClr;
}

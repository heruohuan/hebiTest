#include "lua_mybo_extensions_auto.hpp"
#include "AttackArea.h"
#include "MyboRenderTexture.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_mybo_extensions_AttackArea_drawArc(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawArc'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        cocos2d::Vec2 arg0;
        double arg1;
        double arg2;
        double arg3;
        int arg4;
        cocos2d::Color4F arg5;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawArc");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawArc");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "AttackArea:drawArc");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "AttackArea:drawArc");

        ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "AttackArea:drawArc");

        ok &=luaval_to_color4f(tolua_S, 7, &arg5, "AttackArea:drawArc");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawArc'", nullptr);
            return 0;
        }
        cobj->drawArc(arg0, arg1, arg2, arg3, arg4, arg5);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawArc",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawArc'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawLine(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawLine'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::Color4F arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawLine");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawLine");

        ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawLine");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawLine'", nullptr);
            return 0;
        }
        cobj->drawLine(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawLine",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawLine'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawRect(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawRect'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Rect arg0;
            ok &= luaval_to_rect(tolua_S, 2, &arg0, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Color4F arg1;
            ok &=luaval_to_color4f(tolua_S, 3, &arg1, "AttackArea:drawRect");

            if (!ok) { break; }
            cobj->drawRect(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Vec2 arg0;
            ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Vec2 arg1;
            ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Color4F arg2;
            ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawRect");

            if (!ok) { break; }
            cobj->drawRect(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 5) {
            cocos2d::Vec2 arg0;
            ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Vec2 arg1;
            ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Vec2 arg2;
            ok &= luaval_to_vec2(tolua_S, 4, &arg2, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Vec2 arg3;
            ok &= luaval_to_vec2(tolua_S, 5, &arg3, "AttackArea:drawRect");

            if (!ok) { break; }
            cocos2d::Color4F arg4;
            ok &=luaval_to_color4f(tolua_S, 6, &arg4, "AttackArea:drawRect");

            if (!ok) { break; }
            cobj->drawRect(arg0, arg1, arg2, arg3, arg4);
            return 0;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "AttackArea:drawRect",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawRect'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setLineColor(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setLineColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4F arg0;

        ok &=luaval_to_color4f(tolua_S, 2, &arg0, "AttackArea:setLineColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setLineColor'", nullptr);
            return 0;
        }
        cobj->setLineColor(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setLineColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setLineColor'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawSolidCircle(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawSolidCircle'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        double arg1;
        cocos2d::Color4F arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawSolidCircle");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawSolidCircle");

        ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawSolidCircle");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawSolidCircle'", nullptr);
            return 0;
        }
        cobj->drawSolidCircle(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawSolidCircle",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawSolidCircle'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setLineWidth(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setLineWidth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "AttackArea:setLineWidth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setLineWidth'", nullptr);
            return 0;
        }
        cobj->setLineWidth(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setLineWidth",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setLineWidth'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawRoundedRect(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawRoundedRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        double arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawRoundedRect");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawRoundedRect");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "AttackArea:drawRoundedRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawRoundedRect'", nullptr);
            return 0;
        }
        cobj->drawRoundedRect(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawRoundedRect",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawRoundedRect'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawDot(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawDot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        double arg1;
        cocos2d::Color4F arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawDot");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawDot");

        ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawDot");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawDot'", nullptr);
            return 0;
        }
        cobj->drawDot(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawDot",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawDot'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setOpacityf(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setOpacityf'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "AttackArea:setOpacityf");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setOpacityf'", nullptr);
            return 0;
        }
        cobj->setOpacityf(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setOpacityf",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setOpacityf'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_addPoint(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_addPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Vec2 arg0;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:addPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_addPoint'", nullptr);
            return 0;
        }
        cobj->addPoint(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:addPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_addPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_onDraw(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_onDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Mat4 arg0;
        unsigned int arg1;

        ok &= luaval_to_mat4(tolua_S, 2, &arg0, "AttackArea:onDraw");

        ok &= luaval_to_uint32(tolua_S, 3,&arg1, "AttackArea:onDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_onDraw'", nullptr);
            return 0;
        }
        cobj->onDraw(arg0, arg1);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:onDraw",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_onDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setFillColor(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setFillColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4F arg0;

        ok &=luaval_to_color4f(tolua_S, 2, &arg0, "AttackArea:setFillColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setFillColor'", nullptr);
            return 0;
        }
        cobj->setFillColor(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setFillColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setFillColor'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawCircle(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawCircle'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 3) {
            cocos2d::Vec2 arg0;
            ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawCircle");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawCircle");

            if (!ok) { break; }
            cocos2d::Color4F arg2;
            ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawCircle");

            if (!ok) { break; }
            cobj->drawCircle(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 8) {
            cocos2d::Vec2 arg0;
            ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawCircle");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawCircle");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "AttackArea:drawCircle");

            if (!ok) { break; }
            unsigned int arg3;
            ok &= luaval_to_uint32(tolua_S, 5,&arg3, "AttackArea:drawCircle");

            if (!ok) { break; }
            bool arg4;
            ok &= luaval_to_boolean(tolua_S, 6,&arg4, "AttackArea:drawCircle");

            if (!ok) { break; }
            double arg5;
            ok &= luaval_to_number(tolua_S, 7,&arg5, "AttackArea:drawCircle");

            if (!ok) { break; }
            double arg6;
            ok &= luaval_to_number(tolua_S, 8,&arg6, "AttackArea:drawCircle");

            if (!ok) { break; }
            cocos2d::Color4F arg7;
            ok &=luaval_to_color4f(tolua_S, 9, &arg7, "AttackArea:drawCircle");

            if (!ok) { break; }
            cobj->drawCircle(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
            return 0;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "AttackArea:drawCircle",argc, 8);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawCircle'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawQuadBezier(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawQuadBezier'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::Vec2 arg2;
        cocos2d::Color4F arg3;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawQuadBezier");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawQuadBezier");

        ok &= luaval_to_vec2(tolua_S, 4, &arg2, "AttackArea:drawQuadBezier");

        ok &=luaval_to_color4f(tolua_S, 5, &arg3, "AttackArea:drawQuadBezier");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawQuadBezier'", nullptr);
            return 0;
        }
        cobj->drawQuadBezier(arg0, arg1, arg2, arg3);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawQuadBezier",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawQuadBezier'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawEllipse(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawEllipse'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        cocos2d::Vec2 arg0;
        double arg1;
        double arg2;
        cocos2d::Color4F arg3;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawEllipse");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "AttackArea:drawEllipse");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "AttackArea:drawEllipse");

        ok &=luaval_to_color4f(tolua_S, 5, &arg3, "AttackArea:drawEllipse");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawEllipse'", nullptr);
            return 0;
        }
        cobj->drawEllipse(arg0, arg1, arg2, arg3);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawEllipse",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawEllipse'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setColor(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4F arg0;

        ok &=luaval_to_color4f(tolua_S, 2, &arg0, "AttackArea:setColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setColor'", nullptr);
            return 0;
        }
        cobj->setColor(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setColor'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_clear(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_clear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_clear'", nullptr);
            return 0;
        }
        cobj->clear();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:clear",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_clear'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_enablePathWind(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_enablePathWind'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_enablePathWind'", nullptr);
            return 0;
        }
        cobj->enablePathWind();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:enablePathWind",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_enablePathWind'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawSolidRect(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawSolidRect'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::Color4F arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawSolidRect");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawSolidRect");

        ok &=luaval_to_color4f(tolua_S, 4, &arg2, "AttackArea:drawSolidRect");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawSolidRect'", nullptr);
            return 0;
        }
        cobj->drawSolidRect(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawSolidRect",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawSolidRect'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawPoint(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawPoint'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Color4F arg1;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawPoint");

        ok &=luaval_to_color4f(tolua_S, 3, &arg1, "AttackArea:drawPoint");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawPoint'", nullptr);
            return 0;
        }
        cobj->drawPoint(arg0, arg1);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawPoint",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_drawCubicBezier(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_drawCubicBezier'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Vec2 arg1;
        cocos2d::Vec2 arg2;
        cocos2d::Vec2 arg3;
        cocos2d::Color4F arg4;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "AttackArea:drawCubicBezier");

        ok &= luaval_to_vec2(tolua_S, 3, &arg1, "AttackArea:drawCubicBezier");

        ok &= luaval_to_vec2(tolua_S, 4, &arg2, "AttackArea:drawCubicBezier");

        ok &= luaval_to_vec2(tolua_S, 5, &arg3, "AttackArea:drawCubicBezier");

        ok &=luaval_to_color4f(tolua_S, 6, &arg4, "AttackArea:drawCubicBezier");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_drawCubicBezier'", nullptr);
            return 0;
        }
        cobj->drawCubicBezier(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:drawCubicBezier",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_drawCubicBezier'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setRadius(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setRadius'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "AttackArea:setRadius");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setRadius'", nullptr);
            return 0;
        }
        cobj->setRadius(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setRadius",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setRadius'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_setFill(lua_State* tolua_S)
{
    int argc = 0;
    AttackArea* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (AttackArea*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_AttackArea_setFill'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "AttackArea:setFill");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_setFill'", nullptr);
            return 0;
        }
        cobj->setFill(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "AttackArea:setFill",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_setFill'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_AttackArea_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"AttackArea",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_AttackArea_create'", nullptr);
            return 0;
        }
        AttackArea* ret = AttackArea::create();
        object_to_luaval<AttackArea>(tolua_S, "AttackArea",(AttackArea*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "AttackArea:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_AttackArea_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_mybo_extensions_AttackArea_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (AttackArea)");
    return 0;
}

int lua_register_mybo_extensions_AttackArea(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"AttackArea");
    tolua_cclass(tolua_S,"AttackArea","AttackArea","cc.NVGNode",nullptr);

    tolua_beginmodule(tolua_S,"AttackArea");
        tolua_function(tolua_S,"drawArc",lua_mybo_extensions_AttackArea_drawArc);
        tolua_function(tolua_S,"drawLine",lua_mybo_extensions_AttackArea_drawLine);
        tolua_function(tolua_S,"drawRect",lua_mybo_extensions_AttackArea_drawRect);
        tolua_function(tolua_S,"setLineColor",lua_mybo_extensions_AttackArea_setLineColor);
        tolua_function(tolua_S,"drawSolidCircle",lua_mybo_extensions_AttackArea_drawSolidCircle);
        tolua_function(tolua_S,"setLineWidth",lua_mybo_extensions_AttackArea_setLineWidth);
        tolua_function(tolua_S,"drawRoundedRect",lua_mybo_extensions_AttackArea_drawRoundedRect);
        tolua_function(tolua_S,"drawDot",lua_mybo_extensions_AttackArea_drawDot);
        tolua_function(tolua_S,"setOpacityf",lua_mybo_extensions_AttackArea_setOpacityf);
        tolua_function(tolua_S,"addPoint",lua_mybo_extensions_AttackArea_addPoint);
        tolua_function(tolua_S,"onDraw",lua_mybo_extensions_AttackArea_onDraw);
        tolua_function(tolua_S,"setFillColor",lua_mybo_extensions_AttackArea_setFillColor);
        tolua_function(tolua_S,"drawCircle",lua_mybo_extensions_AttackArea_drawCircle);
        tolua_function(tolua_S,"drawQuadBezier",lua_mybo_extensions_AttackArea_drawQuadBezier);
        tolua_function(tolua_S,"drawEllipse",lua_mybo_extensions_AttackArea_drawEllipse);
        tolua_function(tolua_S,"setColor",lua_mybo_extensions_AttackArea_setColor);
        tolua_function(tolua_S,"clear",lua_mybo_extensions_AttackArea_clear);
        tolua_function(tolua_S,"enablePathWind",lua_mybo_extensions_AttackArea_enablePathWind);
        tolua_function(tolua_S,"drawSolidRect",lua_mybo_extensions_AttackArea_drawSolidRect);
        tolua_function(tolua_S,"drawPoint",lua_mybo_extensions_AttackArea_drawPoint);
        tolua_function(tolua_S,"drawCubicBezier",lua_mybo_extensions_AttackArea_drawCubicBezier);
        tolua_function(tolua_S,"setRadius",lua_mybo_extensions_AttackArea_setRadius);
        tolua_function(tolua_S,"setFill",lua_mybo_extensions_AttackArea_setFill);
        tolua_function(tolua_S,"create", lua_mybo_extensions_AttackArea_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(AttackArea).name();
    g_luaType[typeName] = "AttackArea";
    g_typeCast["AttackArea"] = "AttackArea";
    return 1;
}

int lua_mybo_extensions_MyboRenderTexture_setVirtualViewport(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setVirtualViewport'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Vec2 arg0;
        cocos2d::Rect arg1;
        cocos2d::Rect arg2;

        ok &= luaval_to_vec2(tolua_S, 2, &arg0, "MyboRenderTexture:setVirtualViewport");

        ok &= luaval_to_rect(tolua_S, 3, &arg1, "MyboRenderTexture:setVirtualViewport");

        ok &= luaval_to_rect(tolua_S, 4, &arg2, "MyboRenderTexture:setVirtualViewport");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setVirtualViewport'", nullptr);
            return 0;
        }
        cobj->setVirtualViewport(arg0, arg1, arg2);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setVirtualViewport",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setVirtualViewport'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_clearStencil(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_clearStencil'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:clearStencil");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_clearStencil'", nullptr);
            return 0;
        }
        cobj->clearStencil(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:clearStencil",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_clearStencil'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_getClearDepth(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_getClearDepth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_getClearDepth'", nullptr);
            return 0;
        }
        double ret = cobj->getClearDepth();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:getClearDepth",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_getClearDepth'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_getClearStencil(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_getClearStencil'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_getClearStencil'", nullptr);
            return 0;
        }
        int ret = cobj->getClearStencil();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:getClearStencil",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_getClearStencil'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_end(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_end'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_end'", nullptr);
            return 0;
        }
        cobj->end();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:end",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_end'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setClearStencil(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setClearStencil'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:setClearStencil");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setClearStencil'", nullptr);
            return 0;
        }
        cobj->setClearStencil(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setClearStencil",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setClearStencil'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setSprite(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Sprite* arg0;

        ok &= luaval_to_object<cocos2d::Sprite>(tolua_S, 2, "cc.Sprite",&arg0);
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setSprite'", nullptr);
            return 0;
        }
        cobj->setSprite(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setSprite",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_getSprite(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_getSprite'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_getSprite'", nullptr);
            return 0;
        }
        cocos2d::Sprite* ret = cobj->getSprite();
        object_to_luaval<cocos2d::Sprite>(tolua_S, "cc.Sprite",(cocos2d::Sprite*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:getSprite",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_getSprite'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_isAutoDraw(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_isAutoDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_isAutoDraw'", nullptr);
            return 0;
        }
        bool ret = cobj->isAutoDraw();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:isAutoDraw",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_isAutoDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setKeepMatrix(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setKeepMatrix'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "MyboRenderTexture:setKeepMatrix");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setKeepMatrix'", nullptr);
            return 0;
        }
        cobj->setKeepMatrix(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setKeepMatrix",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setKeepMatrix'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setClearFlags(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setClearFlags'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "MyboRenderTexture:setClearFlags");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setClearFlags'", nullptr);
            return 0;
        }
        cobj->setClearFlags(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setClearFlags",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setClearFlags'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_begin(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_begin'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_begin'", nullptr);
            return 0;
        }
        cobj->begin();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:begin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_begin'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_saveToFile(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_saveToFile'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            cocos2d::Image::Format arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            cocos2d::Image::Format arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            cocos2d::Image::Format arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool arg2;
            ok &= luaval_to_boolean(tolua_S, 4,&arg2, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            std::function<void (MyboRenderTexture *, const std::basic_string<char> &)> arg3;
            do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 2) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0, arg1);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            std::string arg0;
            ok &= luaval_to_std_string(tolua_S, 2,&arg0, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            bool arg1;
            ok &= luaval_to_boolean(tolua_S, 3,&arg1, "MyboRenderTexture:saveToFile");

            if (!ok) { break; }
            std::function<void (MyboRenderTexture *, const std::basic_string<char> &)> arg2;
            do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;

            if (!ok) { break; }
            bool ret = cobj->saveToFile(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "MyboRenderTexture:saveToFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_saveToFile'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setAutoDraw(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setAutoDraw'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "MyboRenderTexture:setAutoDraw");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setAutoDraw'", nullptr);
            return 0;
        }
        cobj->setAutoDraw(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setAutoDraw",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setAutoDraw'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setClearColor(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setClearColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color4F arg0;

        ok &=luaval_to_color4f(tolua_S, 2, &arg0, "MyboRenderTexture:setClearColor");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setClearColor'", nullptr);
            return 0;
        }
        cobj->setClearColor(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setClearColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setClearColor'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_endToLua(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_endToLua'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_endToLua'", nullptr);
            return 0;
        }
        cobj->endToLua();
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:endToLua",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_endToLua'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_beginWithClear(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_beginWithClear'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 5) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg3;
            ok &= luaval_to_number(tolua_S, 5,&arg3, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg4;
            ok &= luaval_to_number(tolua_S, 6,&arg4, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            cobj->beginWithClear(arg0, arg1, arg2, arg3, arg4);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 4) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg3;
            ok &= luaval_to_number(tolua_S, 5,&arg3, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            cobj->beginWithClear(arg0, arg1, arg2, arg3);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 6) {
            double arg0;
            ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg2;
            ok &= luaval_to_number(tolua_S, 4,&arg2, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg3;
            ok &= luaval_to_number(tolua_S, 5,&arg3, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            double arg4;
            ok &= luaval_to_number(tolua_S, 6,&arg4, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            int arg5;
            ok &= luaval_to_int32(tolua_S, 7,(int *)&arg5, "MyboRenderTexture:beginWithClear");

            if (!ok) { break; }
            cobj->beginWithClear(arg0, arg1, arg2, arg3, arg4, arg5);
            return 0;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "MyboRenderTexture:beginWithClear",argc, 6);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_beginWithClear'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_clearDepth(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_clearDepth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:clearDepth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_clearDepth'", nullptr);
            return 0;
        }
        cobj->clearDepth(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:clearDepth",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_clearDepth'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_getClearColor(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_getClearColor'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_getClearColor'", nullptr);
            return 0;
        }
        const cocos2d::Color4F& ret = cobj->getClearColor();
        color4f_to_luaval(tolua_S, ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:getClearColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_getClearColor'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_clear(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_clear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 4) 
    {
        double arg0;
        double arg1;
        double arg2;
        double arg3;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:clear");

        ok &= luaval_to_number(tolua_S, 3,&arg1, "MyboRenderTexture:clear");

        ok &= luaval_to_number(tolua_S, 4,&arg2, "MyboRenderTexture:clear");

        ok &= luaval_to_number(tolua_S, 5,&arg3, "MyboRenderTexture:clear");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_clear'", nullptr);
            return 0;
        }
        cobj->clear(arg0, arg1, arg2, arg3);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:clear",argc, 4);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_clear'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_getClearFlags(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_getClearFlags'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_getClearFlags'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->getClearFlags();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:getClearFlags",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_getClearFlags'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_newImage(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_newImage'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_newImage'", nullptr);
            return 0;
        }
        cocos2d::Image* ret = cobj->newImage();
        object_to_luaval<cocos2d::Image>(tolua_S, "cc.Image",(cocos2d::Image*)ret);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "MyboRenderTexture:newImage");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_newImage'", nullptr);
            return 0;
        }
        cocos2d::Image* ret = cobj->newImage(arg0);
        object_to_luaval<cocos2d::Image>(tolua_S, "cc.Image",(cocos2d::Image*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:newImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_newImage'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_setClearDepth(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_setClearDepth'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0, "MyboRenderTexture:setClearDepth");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_setClearDepth'", nullptr);
            return 0;
        }
        cobj->setClearDepth(arg0);
        return 0;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:setClearDepth",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_setClearDepth'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_initWithWidthAndHeight(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (MyboRenderTexture*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_mybo_extensions_MyboRenderTexture_initWithWidthAndHeight'", nullptr);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 4) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            cocos2d::Texture2D::PixelFormat arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            unsigned int arg3;
            ok &= luaval_to_uint32(tolua_S, 5,&arg3, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            bool ret = cobj->initWithWidthAndHeight(arg0, arg1, arg2, arg3);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            cocos2d::Texture2D::PixelFormat arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "MyboRenderTexture:initWithWidthAndHeight");

            if (!ok) { break; }
            bool ret = cobj->initWithWidthAndHeight(arg0, arg1, arg2);
            tolua_pushboolean(tolua_S,(bool)ret);
            return 1;
        }
    }while(0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n",  "MyboRenderTexture:initWithWidthAndHeight",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_initWithWidthAndHeight'.",&tolua_err);
#endif

    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"MyboRenderTexture",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do 
    {
        if (argc == 3)
        {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:create");
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:create");
            if (!ok) { break; }
            cocos2d::Texture2D::PixelFormat arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "MyboRenderTexture:create");
            if (!ok) { break; }
            MyboRenderTexture* ret = MyboRenderTexture::create(arg0, arg1, arg2);
            object_to_luaval<MyboRenderTexture>(tolua_S, "MyboRenderTexture",(MyboRenderTexture*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 4)
        {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:create");
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:create");
            if (!ok) { break; }
            cocos2d::Texture2D::PixelFormat arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "MyboRenderTexture:create");
            if (!ok) { break; }
            unsigned int arg3;
            ok &= luaval_to_uint32(tolua_S, 5,&arg3, "MyboRenderTexture:create");
            if (!ok) { break; }
            MyboRenderTexture* ret = MyboRenderTexture::create(arg0, arg1, arg2, arg3);
            object_to_luaval<MyboRenderTexture>(tolua_S, "MyboRenderTexture",(MyboRenderTexture*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    do 
    {
        if (argc == 2)
        {
            int arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "MyboRenderTexture:create");
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "MyboRenderTexture:create");
            if (!ok) { break; }
            MyboRenderTexture* ret = MyboRenderTexture::create(arg0, arg1);
            object_to_luaval<MyboRenderTexture>(tolua_S, "MyboRenderTexture",(MyboRenderTexture*)ret);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "MyboRenderTexture:create",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_create'.",&tolua_err);
#endif
    return 0;
}
int lua_mybo_extensions_MyboRenderTexture_constructor(lua_State* tolua_S)
{
    int argc = 0;
    MyboRenderTexture* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_mybo_extensions_MyboRenderTexture_constructor'", nullptr);
            return 0;
        }
        cobj = new MyboRenderTexture();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"MyboRenderTexture");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "MyboRenderTexture:MyboRenderTexture",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_mybo_extensions_MyboRenderTexture_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_mybo_extensions_MyboRenderTexture_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (MyboRenderTexture)");
    return 0;
}

int lua_register_mybo_extensions_MyboRenderTexture(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"MyboRenderTexture");
    tolua_cclass(tolua_S,"MyboRenderTexture","MyboRenderTexture","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"MyboRenderTexture");
        tolua_function(tolua_S,"new",lua_mybo_extensions_MyboRenderTexture_constructor);
        tolua_function(tolua_S,"setVirtualViewport",lua_mybo_extensions_MyboRenderTexture_setVirtualViewport);
        tolua_function(tolua_S,"clearStencil",lua_mybo_extensions_MyboRenderTexture_clearStencil);
        tolua_function(tolua_S,"getClearDepth",lua_mybo_extensions_MyboRenderTexture_getClearDepth);
        tolua_function(tolua_S,"getClearStencil",lua_mybo_extensions_MyboRenderTexture_getClearStencil);
        tolua_function(tolua_S,"end",lua_mybo_extensions_MyboRenderTexture_end);
        tolua_function(tolua_S,"setClearStencil",lua_mybo_extensions_MyboRenderTexture_setClearStencil);
        tolua_function(tolua_S,"setSprite",lua_mybo_extensions_MyboRenderTexture_setSprite);
        tolua_function(tolua_S,"getSprite",lua_mybo_extensions_MyboRenderTexture_getSprite);
        tolua_function(tolua_S,"isAutoDraw",lua_mybo_extensions_MyboRenderTexture_isAutoDraw);
        tolua_function(tolua_S,"setKeepMatrix",lua_mybo_extensions_MyboRenderTexture_setKeepMatrix);
        tolua_function(tolua_S,"setClearFlags",lua_mybo_extensions_MyboRenderTexture_setClearFlags);
        tolua_function(tolua_S,"begin",lua_mybo_extensions_MyboRenderTexture_begin);
        tolua_function(tolua_S,"saveToFile",lua_mybo_extensions_MyboRenderTexture_saveToFile);
        tolua_function(tolua_S,"setAutoDraw",lua_mybo_extensions_MyboRenderTexture_setAutoDraw);
        tolua_function(tolua_S,"setClearColor",lua_mybo_extensions_MyboRenderTexture_setClearColor);
        tolua_function(tolua_S,"endToLua",lua_mybo_extensions_MyboRenderTexture_endToLua);
        tolua_function(tolua_S,"beginWithClear",lua_mybo_extensions_MyboRenderTexture_beginWithClear);
        tolua_function(tolua_S,"clearDepth",lua_mybo_extensions_MyboRenderTexture_clearDepth);
        tolua_function(tolua_S,"getClearColor",lua_mybo_extensions_MyboRenderTexture_getClearColor);
        tolua_function(tolua_S,"clear",lua_mybo_extensions_MyboRenderTexture_clear);
        tolua_function(tolua_S,"getClearFlags",lua_mybo_extensions_MyboRenderTexture_getClearFlags);
        tolua_function(tolua_S,"newImage",lua_mybo_extensions_MyboRenderTexture_newImage);
        tolua_function(tolua_S,"setClearDepth",lua_mybo_extensions_MyboRenderTexture_setClearDepth);
        tolua_function(tolua_S,"initWithWidthAndHeight",lua_mybo_extensions_MyboRenderTexture_initWithWidthAndHeight);
        tolua_function(tolua_S,"create", lua_mybo_extensions_MyboRenderTexture_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(MyboRenderTexture).name();
    g_luaType[typeName] = "MyboRenderTexture";
    g_typeCast["MyboRenderTexture"] = "MyboRenderTexture";
    return 1;
}
TOLUA_API int register_all_mybo_extensions(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"cc",0);
	tolua_beginmodule(tolua_S,"cc");

	lua_register_mybo_extensions_AttackArea(tolua_S);
	lua_register_mybo_extensions_MyboRenderTexture(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}



--------------------------------
-- @module AttackArea
-- @extend NVGNode
-- @parent_module cc

--------------------------------
--  draw a segment with a radius and color 
-- @function [parent=#AttackArea] drawArc 
-- @param self
-- @param #vec2_table pos
-- @param #float radius
-- @param #float a0
-- @param #float a1
-- @param #int dir
-- @param #color4f_table color
        
--------------------------------
--  线 
-- @function [parent=#AttackArea] drawLine 
-- @param self
-- @param #vec2_table origin
-- @param #vec2_table destination
-- @param #color4f_table color
        
--------------------------------
-- @overload self, rect_table, color4f_table         
-- @overload self, vec2_table, vec2_table, color4f_table         
-- @overload self, vec2_table, vec2_table, vec2_table, vec2_table, color4f_table         
-- @function [parent=#AttackArea] drawRect
-- @param self
-- @param #vec2_table lb
-- @param #vec2_table lt
-- @param #vec2_table rt
-- @param #vec2_table rb
-- @param #color4f_table color

--------------------------------
-- 
-- @function [parent=#AttackArea] setLineColor 
-- @param self
-- @param #color4f_table color
        
--------------------------------
-- 
-- @function [parent=#AttackArea] drawSolidCircle 
-- @param self
-- @param #vec2_table center
-- @param #float radius
-- @param #color4f_table color
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setLineWidth 
-- @param self
-- @param #float width
        
--------------------------------
--  圆角矩形 
-- @function [parent=#AttackArea] drawRoundedRect 
-- @param self
-- @param #vec2_table origin
-- @param #vec2_table destination
-- @param #float radius
        
--------------------------------
--  draw a dot at a position, with a given radius and color 
-- @function [parent=#AttackArea] drawDot 
-- @param self
-- @param #vec2_table pos
-- @param #float radius
-- @param #color4f_table color
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setOpacityf 
-- @param self
-- @param #float opacity
        
--------------------------------
-- 
-- @function [parent=#AttackArea] addPoint 
-- @param self
-- @param #vec2_table point
        
--------------------------------
-- 
-- @function [parent=#AttackArea] onDraw 
-- @param self
-- @param #mat4_table transform
-- @param #unsigned int flags
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setFillColor 
-- @param self
-- @param #color4f_table color
        
--------------------------------
-- @overload self, vec2_table, float, color4f_table         
-- @overload self, vec2_table, float, float, unsigned int, bool, float, float, color4f_table         
-- @function [parent=#AttackArea] drawCircle
-- @param self
-- @param #vec2_table center
-- @param #float radius
-- @param #float angle
-- @param #unsigned int segments
-- @param #bool drawLineToCenter
-- @param #float scaleX
-- @param #float scaleY
-- @param #color4f_table color

--------------------------------
--  曲线 
-- @function [parent=#AttackArea] drawQuadBezier 
-- @param self
-- @param #vec2_table origin
-- @param #vec2_table control
-- @param #vec2_table destination
-- @param #color4f_table color
        
--------------------------------
--  椭圆 
-- @function [parent=#AttackArea] drawEllipse 
-- @param self
-- @param #vec2_table center
-- @param #float radiusX
-- @param #float radiusY
-- @param #color4f_table color
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setColor 
-- @param self
-- @param #color4f_table color
        
--------------------------------
--  Clear the geometry in the node's buffer. 
-- @function [parent=#AttackArea] clear 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#AttackArea] enablePathWind 
-- @param self
        
--------------------------------
-- 
-- @function [parent=#AttackArea] drawSolidRect 
-- @param self
-- @param #vec2_table origin
-- @param #vec2_table destination
-- @param #color4f_table color
        
--------------------------------
--  点 
-- @function [parent=#AttackArea] drawPoint 
-- @param self
-- @param #vec2_table point
-- @param #color4f_table color
        
--------------------------------
--  draw a cubic bezier curve with color and number of segments 
-- @function [parent=#AttackArea] drawCubicBezier 
-- @param self
-- @param #vec2_table origin
-- @param #vec2_table control1
-- @param #vec2_table control2
-- @param #vec2_table destination
-- @param #color4f_table color
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setRadius 
-- @param self
-- @param #float radius
        
--------------------------------
-- 
-- @function [parent=#AttackArea] setFill 
-- @param self
-- @param #bool bFill
        
--------------------------------
-- 
-- @function [parent=#AttackArea] create 
-- @param self
-- @return AttackArea#AttackArea ret (return value: AttackArea)
        
--------------------------------
-- 
-- @function [parent=#AttackArea] draw 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table transform
-- @param #unsigned int flags
        
return nil

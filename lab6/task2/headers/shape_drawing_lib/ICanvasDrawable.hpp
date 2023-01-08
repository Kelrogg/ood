
#ifndef SHAPE_DRAWING_LIB_ICANVAS_DRAWABLE_HPP
#define SHAPE_DRAWING_LIB_ICANVAS_DRAWABLE_HPP

//#include "ICanvasDrawable_fwd.hpp"
#include "graphics_lib/ICanvas.hpp"

namespace shape_drawing_lib
{

class ICanvasDrawable
{
public:
	using Canvas = graphics_lib::ICanvas;

	virtual void Draw(Canvas& canvas) const = 0;

	virtual ~ICanvasDrawable() = default;
};

}

#endif
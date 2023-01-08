#ifndef SHAPE_DRAWING_LIB_CANVAS_PAINTER_HPP
#define SHAPE_DRAWING_LIB_CANVAS_PAINTER_HPP

#include "ICanvasDrawable.hpp"
#include "graphics_lib/ICanvas.hpp"

namespace shape_drawing_lib
{

class CanvasPainter
{
public:
	using Canvas = graphics_lib::ICanvas;
	using CanvasPtr = std::unique_ptr<Canvas>;

	CanvasPainter(CanvasPtr&& canvas);

	void Draw(const ICanvasDrawable& drawable);

private:
	CanvasPtr m_canvas;
};

}

#endif
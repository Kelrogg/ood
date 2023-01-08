#include "pch.hpp"

#include "shape_drawing_lib/CanvasPainter.hpp"

namespace shape_drawing_lib
{

CanvasPainter::CanvasPainter(CanvasPtr&& canvas)
	: m_canvas(std::move(canvas))
{
}

void CanvasPainter::Draw(const ICanvasDrawable& drawable)
{
	drawable.Draw(*m_canvas);
}

}
#include "pch.hpp"

#include "app/PaintPicture.hpp"

#include "app/ModernGraphicsRendererAdapter.hpp"
#include "modern_graphics_lib/ModernGraphicsRenderer.hpp"
#include "graphics_lib/Canvas.hpp"

#include "shape_drawing_lib/CanvasPainter.hpp"
#include "shape_drawing_lib/Rectangle.hpp"
#include "shape_drawing_lib/Triangle.hpp"

namespace app
{

void PaintPicture(shape_drawing_lib::CanvasPainter& painter)
{
	using namespace shape_drawing_lib;

	Triangle triangle({ 10, 15 }, { 100, 200 }, { 150, 250 });
    Rectangle rectangle({ 30, 40 }, 18, 24);
	
	painter.Draw(triangle);
	painter.Draw(rectangle);
}

void PaintPictureOnCanvas()
{
	std::unique_ptr<graphics_lib::ICanvas> simpleCanvas = std::make_unique<graphics_lib::Canvas>();
	shape_drawing_lib::CanvasPainter painter(std::move(simpleCanvas));
	PaintPicture(painter);
}

void PaintPictureOnModernGraphicsRenderer()
{
	std::unique_ptr<graphics_lib::ICanvas> simpleCanvas = std::make_unique<ModernGraphicsRendererAdapter>(std::cout);
	shape_drawing_lib::CanvasPainter painter(std::move(simpleCanvas));

	PaintPicture(painter);
}

} 
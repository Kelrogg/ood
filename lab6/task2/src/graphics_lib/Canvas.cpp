#include "pch.hpp"

#include "graphics_lib/Canvas.hpp"

namespace graphics_lib
{

void Canvas::MoveTo(int x, int y)
{
	std::cout << "MoveTo (" << x << ", " << y << ")" << '\n';
}
void Canvas::LineTo(int x, int y)
{
	std::cout << "LineTo (" << x << ", " << y << ")" << '\n';
}

}
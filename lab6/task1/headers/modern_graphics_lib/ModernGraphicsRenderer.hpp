#ifndef MODERN_GRAPHICS_LIB_MODERN_GRAPHICS_RENDERER_HPP
#define MODERN_GRAPHICS_LIB_MODERN_GRAPHICS_RENDERER_HPP

#include "Point.hpp"

namespace modern_graphics_lib
{

class ModernGraphicsRenderer
{
public:
	ModernGraphicsRenderer(std::ostream& out);
	~ModernGraphicsRenderer();

	void BeginDraw();
	void DrawLine(const Point& start, const Point& end);
	void EndDraw();

private:
	std::ostream& m_out;
	bool m_drawing = false;
};

}

#endif
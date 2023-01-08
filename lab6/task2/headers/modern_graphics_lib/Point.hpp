#ifndef MODERN_GRAPHICS_LIB_POINT_HPP
#define MODERN_GRAPHICS_LIB_POINT_HPP

namespace modern_graphics_lib
{

class Point
{
public:
	Point(int x, int y)
		: x(x)
		, y(y)
	{
	}

	int x, y;
};

}

#endif
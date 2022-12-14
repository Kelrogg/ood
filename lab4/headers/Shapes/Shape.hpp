#ifndef SHAPES_SHAPE_H_
#define SHAPES_SHAPE_H_

#include "IShape.hpp"

#include "Point.hpp"

class Shape : public IShape
{
public:
	Color GetColor() const noexcept final;
	const Point& GetBasePoint() const noexcept final;

protected:
	template <typename Point = Point>
	Shape(Point&& point, Color color)
		: m_basePoint(std::forward<Point>(point))
		, m_color(color)
	{
	}

private:
	Point m_basePoint;
	Color m_color;
};

#endif

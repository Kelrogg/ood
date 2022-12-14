#include "pch.hpp"

#include "shape_drawing_lib/Triangle.hpp"

namespace shape_drawing_lib
{

Triangle::Triangle(const Point& p1, const Point& p2, const Point& p3)
	: m_p1(p1)
	, m_p2(p2)
	, m_p3(p3)
{
}

void Triangle::Draw(Canvas& canvas) const
{
	canvas.MoveTo(m_p1.x, m_p1.y);

	canvas.LineTo(m_p2.x, m_p2.y);
	canvas.LineTo(m_p3.x, m_p3.y);
	canvas.LineTo(m_p1.x, m_p1.y);
}

}
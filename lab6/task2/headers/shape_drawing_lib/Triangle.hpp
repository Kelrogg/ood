#ifndef SHAPE_DRAWING_LIB_TRIANGLE_HPP
#define SHAPE_DRAWING_LIB_TRIANGLE_HPP

#include "graphics_lib/ICanvas.hpp"

#include "ICanvasDrawable.hpp"
#include "Point.hpp"

namespace shape_drawing_lib
{

class Triangle : public ICanvasDrawable
{
public:
	explicit Triangle() = default;
	explicit Triangle(const Point& p1, const Point& p2, const Point& p3);

	void Draw(Canvas& canvas) const override;

private:
	Point m_p1, m_p2, m_p3;
};

}

#endif
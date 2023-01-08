#ifndef SHAPE_DRAWING_LIB_RECTANGLE_HPP
#define SHAPE_DRAWING_LIB_RECTANGLE_HPP

#include "graphics_lib/ICanvas.hpp"

#include "ICanvasDrawable.hpp"
#include "Point.hpp"

namespace shape_drawing_lib
{

class Rectangle : public ICanvasDrawable
{
public:
	explicit Rectangle() = default;
	explicit Rectangle(const Point& leftTop, int width, int height);

	void Draw(Canvas& canvas) const override;

private:
	Point m_leftTop, m_rightBottom;
	int m_width, m_height;
};

}

#endif
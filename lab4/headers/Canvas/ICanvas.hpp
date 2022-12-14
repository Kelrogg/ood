#ifndef CANVAS_ICANVAS_HPP
#define CANVAS_ICANVAS_HPP

#include "Shapes/Color.hpp"
#include "Shapes/Point.hpp"

class ICanvas
{
public:
	virtual void DrawLine(const Point& from, const Point& to) = 0;
	virtual void DrawEllipse(const Point& center, unsigned int verticalR, unsigned int horizontalRadius) = 0;
	virtual void DrawRegularPolygon(const std::vector<Point>& points) = 0;
	virtual void SetColor(Color color) = 0;

	virtual ~ICanvas() = default;
};

using ICanvasSharedPtr = std::shared_ptr<ICanvas>;

#endif

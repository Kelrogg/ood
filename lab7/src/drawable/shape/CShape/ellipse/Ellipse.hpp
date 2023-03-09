#pragma once

#include "../BaseShape.hpp"

class Ellipse : public BaseShape
{
public:
	using MyBase = BaseShape;

	explicit Ellipse() = default;
	explicit Ellipse(const PointD& leftTop, double width, double height, IStylePtr&& outlineStyle, IStylePtr&& fillStyle);

	void Draw(Canvas& canvas) override;
};


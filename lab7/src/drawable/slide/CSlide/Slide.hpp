#pragma once

#include "../ISlide.hpp"
#include "../../shape/group_shape/IGroupShape.hpp"

class Slide : public ISlide
{
public:
	explicit Slide();

	double GetWidth() const override;
	double GetHeight() const override;

	IShapes& GetShapes() const override;

	void Draw(ICanvas& canvas) override;

private:
	using ShapeGroup = IGroupShapePtr;

	ShapeGroup m_shapeGroup;
};

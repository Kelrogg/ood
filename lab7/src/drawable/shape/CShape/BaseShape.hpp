#pragma once

#include "../../common/point/PointD.hpp"
#include "../IShape.hpp"

class BaseShape : public IShape
{
public:
	const RectD& GetFrame() const override;
	void SetFrame(const RectD& rect) override;

	IStyle& GetOutlineStyle() override;
	const IStyle& GetOutlineStyle() const override;

	IStyle& GetFillStyle() override;
	const IStyle& GetFillStyle() const override;

	IGroupShapeSharedPtr GetGroup() override;
	IGroupShapeConstSharedPtr GetGroup() const override;

protected:

	explicit BaseShape();
	explicit BaseShape(const RectD& frame);
	explicit BaseShape(RectD&& frame);
	explicit BaseShape(const RectD& frame, IStylePtr&& outlineStyle, IStylePtr&& fillStyle);
	explicit BaseShape(RectD&& frame, IStylePtr&& outlineStyle, IStylePtr&& fillStyle);

private:
	RectD m_frame;
	IStylePtr m_outlineStyle, m_fillStyle;
};

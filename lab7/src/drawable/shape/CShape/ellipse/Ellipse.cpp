#include "pch.hpp"

#include "Ellipse.hpp"
#include "drawable/shape/CShape/BaseShape.hpp"

Ellipse::Ellipse(const PointD& leftTop, double width, double height, IStylePtr&& outlineStyle, IStylePtr&& fillStyle)
	: MyBase(std::move(RectD(leftTop.x, leftTop.y, width, height)), std::move(outlineStyle), std::move(fillStyle))
{
}

void Ellipse::Draw(Canvas& canvas)
{
	const auto& frame = GetFrame();
	const auto& leftTop = frame.leftTop;

	canvas.SetFillColor(GetFillStyle());
	canvas.SetLineColor(GetOutlineStyle());

	canvas.DrawEllipse(leftTop.x, leftTop.y, frame.width, frame.height);
}
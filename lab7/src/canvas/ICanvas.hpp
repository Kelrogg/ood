#pragma once

#include "ICanvas_fwd.hpp"

#include "drawable/shape/style/IStyle.hpp"
#include "drawable/common/point/PointD.hpp"

class ICanvas
{
public:
	using Style = IStyle;

	virtual void SetLineColor(const Style& color) = 0;
	virtual void SetFillColor(const Style& color) = 0;

	virtual void DrawRectangle(double xLeftTop, double yLeftTop, double width, double height) = 0;
	virtual void DrawEllipse(double xLeftTop, double yLeftTop, double width, double height) = 0;
	virtual void DrawTriangle(const PointD& p1, const PointD& p2, const PointD& p3) = 0;

	virtual ~ICanvas() = default;
};
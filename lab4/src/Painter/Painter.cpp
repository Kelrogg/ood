#include "pch.hpp"

#include "Painter/Painter.hpp"

void Painter::DrawPicture(const PictureDraft& draft, const ICanvasSharedPtr& canvas)
{
	for (const auto& figure : draft)
	{
		figure->Draw(canvas);
	}
}

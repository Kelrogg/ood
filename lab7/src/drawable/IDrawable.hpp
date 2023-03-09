#pragma once

#include "IDrawable_fwd.hpp"
#include "canvas/ICanvas.hpp"

class IDrawable
{
public:
	using Canvas = ICanvas;

	virtual void Draw(Canvas& canvas) = 0;

	virtual ~IDrawable() = default;
};

#pragma once

#include "ISlide_fwd.hpp"
#include "../common/color/RGBAColor.hpp"
#include "../IDrawable.hpp"
#include "../shape/shapes/IShapes.hpp"

class ISlide : public IDrawable
{
public:

	virtual double GetWidth() const = 0;
	virtual double GetHeight() const = 0;

	virtual IShapes& GetShapes() const = 0;

	virtual ~ISlide() = default;
};
#pragma once

#include "IStyle_fwd.hpp"
#include "../../common/color/RGBAColor.hpp"

class IStyle
{
public:
	using BoolO = std::optional<bool>;
	using RGBAColorO = std::optional<RGBAColor>;

	virtual BoolO IsEnabled() const = 0;
	virtual void Enable(bool enable) = 0;

	virtual RGBAColorO GetColor() const = 0;
	virtual void SetColor(RGBAColor color) = 0;

	virtual ~IStyle() = default;
};

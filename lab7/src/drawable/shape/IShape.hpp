#pragma once

#include "../IDrawable.hpp"
#include "../common/rect/RectD.hpp"
#include "IShape_fwd.hpp"
#include "group_shape/IGroupShape_fwd.hpp"
#include "style/IStyle.hpp"

class IShape : public IDrawable
{
public:
	virtual const RectD& GetFrame() const = 0;
	virtual void SetFrame(const RectD& rect) = 0;

	virtual IStyle& GetOutlineStyle() = 0;
	virtual const IStyle& GetOutlineStyle() const = 0;

	virtual IStyle& GetFillStyle() = 0;
	virtual const IStyle& GetFillStyle() const = 0;

	virtual IGroupShapeSharedPtr GetGroup() = 0;
	virtual IGroupShapeConstSharedPtr GetGroup() const = 0;

	virtual ~IShape() = default;
};
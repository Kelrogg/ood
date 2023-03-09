#pragma once

#include "../IShape.hpp"
#include "../shapes/IShapes.hpp"
#include "IGroupShape_fwd.hpp"

class IGroupShape : public IShape
	, public IShapes
{
public:
	virtual ~IGroupShape() = default;
};
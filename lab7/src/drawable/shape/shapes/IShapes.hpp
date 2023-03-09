#pragma once

#include "../IShape.hpp"
#include "IShapes_fwd.hpp"

class IShapes
{
public:
	virtual size_t GetShapesCount() const = 0;
	virtual void InsertShape(const IShapeSharedPtr& shape, std::optional<size_t> position = std::nullopt) = 0;
	virtual const IShapeSharedPtr& GetShapeAtIndex(size_t index) = 0;
	virtual void RemoveShapeAtIndex(size_t index) = 0;

	virtual ~IShapes() = default;
};

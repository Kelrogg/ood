#ifndef SHAPES_FACTORY_ISHAPE_FACTORY_H_
#define SHAPES_FACTORY_ISHAPE_FACTORY_H_

#include "../IShape.hpp"

class IShapeFactory
{
public:
	virtual ShapeSharedPtr CreateShape(const std::string& dscrp) const = 0;

	virtual ~IShapeFactory() = default;
};

using IShapeFactorySharedPtr = std::shared_ptr<IShapeFactory>;

#endif

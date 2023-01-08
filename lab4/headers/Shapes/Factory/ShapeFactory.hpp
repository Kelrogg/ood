#ifndef SHAPES_FACTORY_SHAPE_FACTORY_H
#define SHAPES_FACTORY_SHAPE_FACTORY_H

#include "IShapeFactory.hpp"

class ShapeFactory : public IShapeFactory
{
public:
	ShapeSharedPtr CreateShape(const std::string& dscrp) const override;
};

#endif
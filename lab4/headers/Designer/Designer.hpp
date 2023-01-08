#ifndef DESIGNER_DESIGNER_HPP
#define DESIGNER_DESIGNER_HPP

#include "../Shapes/Factory/ShapeFactory.hpp"

#include "IDesigner.hpp"

class Designer : public IDesigner
{
public:
	template <typename FactoryPtr = IShapeFactorySharedPtr>
	Designer(FactoryPtr&& factoryPtr)
		: m_factoryPtr(std::forward<FactoryPtr>(factoryPtr))
	{
	}

	PictureDraft CreateDraft(std::istream& is) const final;

private:
	IShapeFactorySharedPtr m_factoryPtr;
};

#endif
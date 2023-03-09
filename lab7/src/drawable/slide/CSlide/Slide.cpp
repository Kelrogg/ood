#include "pch.hpp"

#include "Slide.hpp"

#include "../../shape/group_shape/CGroupShape/GroupShape.hpp"

Slide::Slide()
	: m_shapeGroup(std::move(GroupShape::CreateUnique()))
{
}

double Slide::GetWidth() const
{
	return m_shapeGroup->GetFrame().width;
}

double Slide::GetHeight() const
{
	return m_shapeGroup->GetFrame().height;
}

IShapes& Slide::GetShapes() const
{
	return *m_shapeGroup;
}

void Slide::Draw(ICanvas& canvas)
{
	m_shapeGroup->Draw(canvas);
}
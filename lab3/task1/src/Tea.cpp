#include "pch.hpp"

#include "Tea.hpp"

constexpr auto TEA_DESCRIPTION = "Tea";

constexpr auto BLACK_TEA_MODIFIER_DESCRIPTION = "black";
constexpr auto HU_QIAO_TEA_MODIFIER_DESCRIPTION = "hu qiao";
constexpr auto OOLONG_TEA_MODIFIER_DESCRIPTION = "oolong";
constexpr auto PUER_TEA_MODIFIER_DESCRIPTION = "puer";

constexpr auto TEA_COST = 30.;

Tea::Tea(TeaType type)
	: BeverageImpl(TEA_DESCRIPTION)
	, m_cost(TEA_COST)
{
	switch (type)
	{
	case TeaType::BLACK:
		m_description = m_description + ' ' + BLACK_TEA_MODIFIER_DESCRIPTION;
		break;
	case TeaType::HU_QIAO:
		m_description = m_description + ' ' + HU_QIAO_TEA_MODIFIER_DESCRIPTION;
		break;
	case TeaType::OOLONG:
		m_description = m_description + ' ' + OOLONG_TEA_MODIFIER_DESCRIPTION;
		break;
	case TeaType::PUER:
		m_description = m_description + ' ' + PUER_TEA_MODIFIER_DESCRIPTION;
		break;
	}
}

double Tea::GetCost() const
{
	return m_cost;
}

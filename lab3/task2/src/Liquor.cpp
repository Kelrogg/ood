#include "pch.hpp"

#include "Liquor.hpp"

Liquor::Liquor(IBeveragePtr&& beverage, LiquorType type)
	: CondimentDecoratorBase(std::move(beverage))
	, m_type(type)
{
}

constexpr auto LIQUOR_COST = 50.;

double Liquor::GetCondimentCost() const
{
	return LIQUOR_COST;
}

constexpr auto NUT_LIQUOR_DESCRIPTION = "Nut";
constexpr auto CHOCOLATE_LIQUOR_DESCRIPTION = "Chocolate";

std::string Liquor::GetCondimentDescription() const
{
	return std::string((m_type == LiquorType::NUT)
				   ? NUT_LIQUOR_DESCRIPTION
				   : (m_type == LiquorType::CHOCOLATE) ? CHOCOLATE_LIQUOR_DESCRIPTION
													   : "")
		+ " liquor";
}
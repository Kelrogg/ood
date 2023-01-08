#include "pch.hpp"

#include "Chocolate.hpp"

constexpr unsigned MAX_CHOCOLATE_QUANTITY = 5;

Chocolate::Chocolate(IBeveragePtr&& beverage, unsigned quantity)
	: CondimentDecoratorBase(std::move(beverage))
	, m_quantity(std::min(quantity, MAX_CHOCOLATE_QUANTITY))
{
}

constexpr auto CHOCOLATE_COST = 15.;

double Chocolate::GetCondimentCost() const
{
	return CHOCOLATE_COST * m_quantity;
}

std::string Chocolate::GetCondimentDescription() const
{
	return "Chocolate x" + std::to_string(m_quantity);
}
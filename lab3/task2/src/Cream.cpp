
#include "pch.hpp"

#include "Cream.hpp"

Cream::Cream(IBeveragePtr&& beverage)
	: CondimentDecoratorBase(std::move(beverage))
{
}

constexpr auto CREAM_COST = 25.;

double Cream::GetCondimentCost() const
{
	return CREAM_COST;
}

constexpr auto CREAM_DESCRIPTION = "Cream";

std::string Cream::GetCondimentDescription() const
{
	return CREAM_DESCRIPTION;
}
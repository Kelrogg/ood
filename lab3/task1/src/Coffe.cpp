#include "pch.hpp"

#include "Coffee.hpp"

constexpr auto COFFE_COST = 60.;

Coffee::Coffee(const std::string& description)
	: BeverageImpl(description)
{
}

double Coffee::GetCost() const
{
	return COFFE_COST;
}

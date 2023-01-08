﻿#include "pch.hpp"

#include "Cappuccino.hpp"
#include "Milkshake.hpp"
#include "Latte.hpp"
#include "Tea.hpp"

#include "Cream.hpp"
#include "Liquor.hpp"
#include "Chocolate.hpp"

void DialogWithUser()
{
	std::cout << "Type to change:\n" <<
					"1: latte\n" <<
					"2: cappuccino\n" <<
					"3: tea\n" <<
					"4: milkshake\n";
	int beverageChoice;
	std::cin >> beverageChoice;

	std::unique_ptr<IBeverage> beverage;

	int choice;
	if (beverageChoice == 3)
	{
		std::cout << "Type to change sort:\n" <<
					"0: black\n" <<
					"1: hu qiao\n" <<
					"2: oolong\n" <<
					"3: puer\n";
		std::cin >> choice;
		beverage = std::make_unique<Tea>(TeaType(choice));
	}
	else if (beverageChoice == 4)
	{
		std::cout << "Type for:\n" <<
					"0: small\n" <<
					"1: medium\n" <<
					"2: large\n";
		std::cin >> choice;
		beverage = std::make_unique<Milkshake>(MilkshakePortionSize(choice));
	}
	else if (beverageChoice == 1 || beverageChoice == 2)
	{
		std::cout << "Type 0 for standard or 1 for double portion\n";
		std::cin >> choice;

		if (beverageChoice == 1)
		{
			beverage = std::make_unique<Latte>(LattePortionSize(choice));
		}
		else if (beverageChoice == 2)
		{
			beverage = std::make_unique<Cappuccino>(CappuccinoPortionSize(choice));
		}
	}
	else
	{
		return;
	}

	std::cout << beverage->GetDescription() << ", cost: " << beverage->GetCost() << std::endl;
}

template <typename Condiment, typename... Args>
auto MakeCondiment(const Args&... args)
{
	return [=](auto&& b) {
		return std::make_unique<Condiment>(std::forward<decltype(b)>(b), args...);
	};
}

template <typename Component, typename Decorator>
auto operator<<(Component&& component, const Decorator& decorate)
{
	return decorate(std::forward<Component>(component));
}

int main()
{
	//DialogWithUser();
	auto beverage = std::make_unique<Latte>(LattePortionSize::DOUBLE)
			<< MakeCondiment<Cream>()
			<< MakeCondiment<Chocolate>(4)
			<< MakeCondiment<Liquor>(LiquorType::CHOCOLATE);

	std::cout << beverage->GetDescription() << " costs " << beverage->GetCost() << '\n';
}

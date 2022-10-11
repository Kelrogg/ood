#include "pch.h"

#include "MallardDuck.h"

#include "DanceBehavior.h"
#include "CountedFly.h"
#include "SwimBehavior.h"
#include "QuackBehavior.h"

MallardDuck::MallardDuck()
	: Duck(std::make_unique<DanceBehavior>(),
		std::make_unique<CountedFly>(),
		std::make_unique<SwimBehavior>(),
		std::make_unique<QuackBehavior>())
{
}

void MallardDuck::Display() const
{
	std::cout << "I'm mallard duck" << '\n';
}

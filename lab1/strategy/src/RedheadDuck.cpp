#include "pch.h"

#include "RedheadDuck.h"

#include "DanceBehavior.h"
#include "CountedFly.h"
#include "SwimBehavior.h"
#include "QuackBehavior.h"

RedheadDuck::RedheadDuck()
	: Duck(std::make_unique<DanceBehavior>(),
		std::make_unique<CountedFly>(),
		std::make_unique<SwimBehavior>(),
		std::make_unique<QuackBehavior>())
{
}

void RedheadDuck::Display() const
{
	std::cout << "I'm redhead duck" << '\n';
}

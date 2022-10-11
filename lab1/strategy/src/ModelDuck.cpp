#include "pch.h"

#include "ModelDuck.h"

#include "DanceNoWay.h"
#include "FlyNoWay.h"
#include "SwimNoWay.h"
#include "QuackBehavior.h"

ModelDuck::ModelDuck()
	: Duck(std::make_unique<DanceNoWay>(),
		std::make_unique<FlyNoWay>(),
		std::make_unique<SwimNoWay>(),
		std::make_unique<QuackBehavior>())
{
}

void ModelDuck::Display() const
{
	std::cout << "I'm model duck" << '\n';
}

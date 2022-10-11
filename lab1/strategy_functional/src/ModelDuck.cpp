#include "pch.h"

#include "../include/ModelDuck.h"

#include "../include/DanceBehavior.h"
#include "../include/FlyBehavior.h"
#include "../include/SwimBehavior.h"
#include "../include/QuackBehavior.h"

ModelDuck::ModelDuck()
	: Duck(NoDanceBehavior, CountedFlyBehavior, NoSwimBehavior, QuackBehavior)
{
}

void ModelDuck::Display() const
{
	std::cout << "I'm model duck!" << std::endl;
}


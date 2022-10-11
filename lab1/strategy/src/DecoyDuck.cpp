#include "pch.h"

#include "DecoyDuck.h"

#include "DanceNoWay.h"
#include "FlyNoWay.h"
#include "MuteQuackBehavior.h"
#include "SwimNoWay.h"

DecoyDuck::DecoyDuck()
	: Duck(std::make_unique<DanceNoWay>(),
		std::make_unique<FlyNoWay>(),
		std::make_unique<SwimNoWay>(),
		std::make_unique<MuteQuackBehavior>())
{
}

void DecoyDuck::Display() const
{
	std::cout << "I'm decoy duck" << '\n';
}

#include "pch.h"

#include "FlyWithWings.h"

void FlyWithWings::Fly()
{
	CountedFly::Fly();
	std::cout << "I'm flying with count!! My flight is " << CountedFly::GetCounter() << '\n';
}

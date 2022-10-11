#include "pch.h"

#include "DuckFunctions.h"

#include "DecoyDuck.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include "CountedFly.h"
#include "DanceNoWay.h"

int main()
{
	MallardDuck mallardDuck1;
	PlayWithDuck(mallardDuck1);
	mallardDuck1.SetDanceBehavior(std::make_unique<DanceNoWay>());
	PlayWithDuck(mallardDuck1);
	
	MallardDuck mallardDuck2;
	PlayWithDuck(mallardDuck2);
	mallardDuck2.SetDanceBehavior(std::make_unique<DanceNoWay>());
	PlayWithDuck(mallardDuck2);

	RedheadDuck redheadDuck;
	PlayWithDuck(redheadDuck);

	RubberDuck rubberDuck;
	PlayWithDuck(rubberDuck);

	DecoyDuck decoyDuck;
	PlayWithDuck(decoyDuck);

	ModelDuck modelDuck;
	PlayWithDuck(modelDuck);
	modelDuck.SetFlyBehavior(std::make_unique<CountedFly>());
	PlayWithDuck(modelDuck);
}

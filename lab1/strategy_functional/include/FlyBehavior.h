#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

static std::function<void()> FlyWithWingsBehavior{
	[]() {
		std::cout << "I'm flying with wings!" << std::endl;
	}
};

static std::function<void()> NoFlyBehavior{
	[]() {}
};

// TODO inline
static std::function<void()> CountedFlyBehavior{
	[flightCount = 0]() mutable -> void {
		++flightCount;
		std::cout << "I'm flying with wings! I'm " << flightCount << std::endl;
	}
};

#endif // !FLYBEHAVIOR_H

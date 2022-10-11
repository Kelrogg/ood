#ifndef SWIMBEHAVIOR_H
#define SWIMBEHAVIOR_H

static std::function<void()> SwimBehavior{
	[]() {
		std::cout << "I'm swimming!" << std::endl;
	}
};

static std::function<void()> NoSwimBehavior{
	[]() {}
};

#endif // !SWIMBEHAVIOR_H

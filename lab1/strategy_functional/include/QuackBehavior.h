#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

static const std::function<void()> QuackBehavior{
	[]() {
		std::cout << "I'm quacking!" << std::endl;
	}
};

static std::function<void()> SqueakBehavior{
	[]() {
		std::cout << "I'm squeaking!" << std::endl;
	}
};

static std::function<void()> MuteBehavior{
	[]() {}
};

#endif // !QUACKBEHAVIOR_H

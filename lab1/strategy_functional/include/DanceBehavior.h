#ifndef DANCEBEHAVIOR_H
#define DANCEBEHAVIOR_H

static std::function<void()> DanceBehavior{
	[]() {
		std::cout << "I'm dancing" << std::endl;
	}
};

static std::function<void()> NoDanceBehavior{
	[]() {}
};

#endif // !DANCEBEHAVIOR_H

#ifndef DUCK_H
#define DUCK_H

#include <functional>

class Duck
{
public:
	using Strategy = std::function<void()>;

	Duck(const Strategy& DanceBehavior,
		const Strategy& aFlyBehavior,
		const Strategy& SwimBehavior,
		const Strategy& QuackBehavior);

	void PerformDance() const;
	void PerformFly() const;
	void PerformSwim() const;
	void PerformQuack() const;
	void SetDanceBehavior(const Strategy& DanceBehavior);
	void SetFlyBehavior(const Strategy& flyBehavior);
	void SetSwimBehavior(const Strategy& SwimBehavior);
	void SetQuackBehavior(const Strategy& QuackBehavior);

	virtual void Display() const = 0;
	virtual ~Duck() = default;

private:
	Strategy m_danceBehavior;
	Strategy m_flyBehavior;
	Strategy m_swimBehavior;
	Strategy m_quackBehavior;
};
#endif // !DUCK_H

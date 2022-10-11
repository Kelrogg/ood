#include "pch.h"

#include "../include/Duck.h"

Duck::Duck(const Strategy& DanceBehavior,
	const Strategy& flyBehavior,
	const Strategy& SwimBehavior,
	const Strategy& QuackBehavior)
	: m_danceBehavior(DanceBehavior)
	, m_flyBehavior(flyBehavior)
	, m_swimBehavior(SwimBehavior)
	, m_quackBehavior(QuackBehavior)
{
}

void Duck::PerformDance() const
{
	m_danceBehavior();
}

void Duck::PerformFly() const
{
	m_flyBehavior();
}

void Duck::PerformSwim() const
{
	m_swimBehavior();
}

void Duck::PerformQuack() const
{
	m_quackBehavior();
}

void Duck::SetDanceBehavior(const Strategy& DanceBehavior)
{
	m_danceBehavior = DanceBehavior;
}

void Duck::SetFlyBehavior(const Strategy& flyBehavior)
{
	m_flyBehavior = flyBehavior;
}

void Duck::SetSwimBehavior(const Strategy& SwimBehavior)
{
	m_swimBehavior = SwimBehavior;
}

void Duck::SetQuackBehavior(const Strategy& QuackBehavior)
{
	m_quackBehavior = QuackBehavior;
}


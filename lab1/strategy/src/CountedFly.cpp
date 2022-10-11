#include "pch.h"

#include "CountedFly.h"

CountedFly::CountedFly()
	: m_flightCount(0)
{
}

std::size_t CountedFly::GetCounter() const
{
	return m_flightCount;
}

void CountedFly::Fly()
{
	++m_flightCount;
}

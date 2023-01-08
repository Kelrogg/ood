#ifndef MILKSHAKE_H
#define MILKSHAKE_H

#include "BeverageImpl.hpp"

enum class MilkshakePortionSize
{
	SMALL = 0,
	MEDIUM,
	LARGE,
};

class Milkshake : public BeverageImpl
{
public:
	Milkshake(MilkshakePortionSize size);

	double GetCost() const override;

private:
	double m_cost;
};

#endif

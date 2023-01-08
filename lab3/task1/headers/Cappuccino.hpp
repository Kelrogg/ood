#ifndef CAPPUCCINO_H
#define CAPPUCCINO_H

#include "BeverageImpl.hpp"

enum class CappuccinoPortionSize
{
	STANDARD = 0,
	DOUBLE,
};

class Cappuccino : public BeverageImpl
{
public:
	Cappuccino(CappuccinoPortionSize size = CappuccinoPortionSize::STANDARD);

	double GetCost() const override;

private:
	double m_cost;
};

#endif

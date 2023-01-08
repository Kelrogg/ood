#ifndef TEA_H
#define TEA_H

#include "BeverageImpl.hpp"

enum class TeaType
{
	BLACK = 0,
	HU_QIAO,
	OOLONG,
	PUER,
};

class Tea : public BeverageImpl
{
public:
	Tea(TeaType type);

	double GetCost() const override;

private:
	double m_cost;
};

#endif

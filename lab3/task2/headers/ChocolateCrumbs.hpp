#ifndef CHOCOLATECRUMBS_H
#define CHOCOLATECRUMBS_H

#include "CondimentDecoratorBase.hpp"

class ChocolateCrumbs : public CondimentDecoratorBase
{
public:
	ChocolateCrumbs(IBeveragePtr&& beverage, unsigned mass);

	double GetCondimentCost() const override;
	std::string GetCondimentDescription() const override;

private:
	unsigned m_mass;
};

#endif

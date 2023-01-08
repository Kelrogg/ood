#ifndef TASK1_IBEVERAGE_H
#define TASK1_IBEVERAGE_H

class IBeverage
{
public:
	virtual std::string GetDescription() const = 0;
	virtual double GetCost() const = 0;
	virtual ~IBeverage() = default;
};

using IBeveragePtr = std::unique_ptr<IBeverage>;

#endif
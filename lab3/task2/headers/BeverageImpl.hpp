#ifndef BEVERAGEIMPL_H
#define BEVERAGEIMPL_H

#include "IBeverage.hpp"

class BeverageImpl : public IBeverage
{
public:
	BeverageImpl(const std::string& description);

	std::string GetDescription() const;

protected:
	std::string m_description;
};

#endif

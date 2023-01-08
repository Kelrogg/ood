#ifndef TASK1_BEVERAGES_H
#define TASK1_BEVERAGES_H

#include "IBeverage.hpp"

class CBeverage : public IBeverage
{
public:
	CBeverage(std::string const& description)
		:m_description(description)
	{}

	std::string GetDescription()const override final
	{
		return m_description;
	}
private:
	std::string m_description;
};

class CCoffee : public CBeverage
{
public:
	CCoffee(std::string const& description = "Coffee")
		: CBeverage(description) 
	{}

	double GetCost() const override 
	{
		return 60; 
	}
};

class CCappuccino : public CCoffee
{
public:
	CCappuccino() 
		:CCoffee("Cappuccino") 
	{}

	double GetCost() const override 
	{
		return 80; 
	}
};

class CLatte : public CCoffee
{
public:
	CLatte() 
		:CCoffee("Latte") 
	{}

	double GetCost() const override 
	{
		return 90; 
	}
};

//TODO Oolong  Puer   Hu Qiao  Желтый
class CTea : public CBeverage
{
public:
	CTea() 
		: CBeverage("Tea") 
	{}

	double GetCost() const override 
	{
		return 30; 
	}
};

class CMilkshake : public CBeverage
{
public:
	CMilkshake() 
		: CBeverage("Milkshake") 
	{}

	double GetCost() const override 
	{ 
		return 80; 
	}
};

class Chocolate : public CBeverage
{
public:
	Chocolate()
		: CBeverage("Chocolate")
	{}

	double GetCost() const override
	{
		return 10;
	}
};

class Cream: public CBeverage
{
public:
	Cream()
		: CBeverage("Cream")
	{}

	double GetCost() const override
	{
		return 25;
	}
};

// TODO
class Liqueur : public CBeverage
{
public:
	Liqueur()
		: CBeverage("Liqueur")
	{}

	double GetCost() const override
	{
		return 50;
	}
};


#endif
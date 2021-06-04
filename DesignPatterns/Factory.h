#pragma once

#include <iostream>
using namespace std;

class Coffee
{

protected:
	char _type[15];
public:
	Coffee();
	~Coffee();
	char* getType();
};

class Expresso : public Coffee
{
public:
	Expresso();
	~Expresso();
};

class DevilsOwn : public Coffee
{
public:
	DevilsOwn();
	~DevilsOwn();
};

/////////////////////////////////////////////////////////////////////
////CoffeeMakerFactory Class
/////////////////////////////////////////////////////////////////////

class CoffeeMakerFactory
{
private:
	Coffee* _coffee;
public:
	Coffee* getCoffee();
};
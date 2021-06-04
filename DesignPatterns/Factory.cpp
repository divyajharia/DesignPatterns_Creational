#include "Factory.h"

Coffee::Coffee() : _type("NULL")
{

}

Coffee::~Coffee()
{
}

char* Coffee::getType()
{
	return _type;
}

Expresso::Expresso() : Coffee()
{
	strcpy_s(_type, "Expresso");
	puts("Making a Expresso");
	puts("Grind and brew one scoop of expresso beans");
}

Expresso::~Expresso()
{
}

DevilsOwn::DevilsOwn() : Coffee()
{
	strcpy_s(_type, "Devils Own");
	puts("Making a Devils Own");
	puts("Grind and brew one scoop of Devil beans");
}

DevilsOwn::~DevilsOwn()
{
}

Coffee* CoffeeMakerFactory::getCoffee()
{
	int choice;
	cout << " Select type of Coffee to make " << endl;
	cout << " 1: Expresso" << endl;
	puts("2: DevilsOwn");
	puts("Selection");
	cin >> choice;

	switch (choice)
	{
	case 1:
		return new Expresso;
		break;
	case 2:
		return new DevilsOwn;
		break;
	default:
		puts("Invalid ");
		return NULL;
		//break;
	}
	return nullptr;
}

//////////////////////////////////////////////////////

//INT Main()
//#include <iostream>
//#include"Factory.h"
//
//int main()
//{
//	CoffeeMakerFactory coffeeM;
//	Coffee* cup;
//	cup = coffeeM.getCoffee();
//	if (cup)
//		cout << endl << "you have asked for a(n) " << cup->getType() << endl;
//	// std::cout << "Hello World!\n";
//}

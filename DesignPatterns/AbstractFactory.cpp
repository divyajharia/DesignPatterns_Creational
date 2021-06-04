#include "AbstractFactory.h"

ElectricEngine::ElectricEngine()
{
	puts("Electric engine goes SHHHHHHHHHHHHHHHHHHHHH");
}

void ElectricEngine::sound()
{
	puts("SHHHHHHH");
}

PetroleumEngine::PetroleumEngine()
{
	puts("Petroleum engine goes VRROOOOOOOMMMMM");
}

void PetroleumEngine::sound()
{
	puts("VRROOOOMMMMMMMMMMMMMMMM");
}

ElectricDoor::ElectricDoor()
{
	puts("Electric door");
}

void ElectricDoor::open()
{
	puts("OOOOHHHOOOOO AAAHHHHAAAA");
}

PetroleumDoor::PetroleumDoor()
{
	puts("Petroleum door");
}

void PetroleumDoor::open()
{
	puts("ZOOOOOOOOOOOOOOOOZZZZZZ");
}

Engine::Engine()
{
	puts("Engin Base class");
}

Door::Door()
{
	puts("Door Base class");
}

Door* GasFactory::CarDoor()
{
	return new PetroleumDoor();
}

Engine* GasFactory::CarEngine()
{
	return new PetroleumEngine();
}

Door* ElectricFactory::CarDoor()
{
	return new ElectricDoor();
}

Engine* ElectricFactory::CarEngine()
{
	return new ElectricEngine();
}


//////////////////////////////////////////////
///INT Main()
//
//int main()
//{
//	CarFactory* Car;
//	int choice = 0;
//	puts("Select a Car Type :");
//	puts("1: Petroleum !");
//	puts("2: Electric");
//	puts("Type in your choice !!! -");
//	cin >> choice;
//
//	switch (choice)
//	{
//	case 1:
//		Car = new GasFactory;
//		break;
//	case 2:
//		Car = new ElectricFactory;
//		break;
//	default:
//		puts("Invallidd!!!!!!!!!!!!!");
//		Car = NULL;
//		break;
//
//	}
//	if (Car)
//	{
//		Door* mydoor = Car->CarDoor();
//		Engine* myengine = Car->CarEngine();
//		mydoor->open();
//		myengine->sound();
//	}
//}
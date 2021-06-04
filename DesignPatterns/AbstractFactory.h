#pragma once

#include<iostream>
using namespace std;

class Door
{
public:
	Door();
	~Door() {};
	virtual void open() = 0;
};

class Engine
{
public:
	Engine();
	~Engine() {};
	virtual void sound() = 0;
};

class PetroleumDoor :public Door
{
public:
	PetroleumDoor();
	~PetroleumDoor() {};
	virtual void open();
};

class ElectricDoor : public Door
{
public:
	ElectricDoor();
	~ElectricDoor() {  };
	virtual void open();
};

class PetroleumEngine :public Engine
{
public:
	PetroleumEngine();
	~PetroleumEngine() {};
	virtual void sound();
};

class ElectricEngine :public Engine
{
public:
	ElectricEngine();
	~ElectricEngine() {};
	virtual void sound();
};

class CarFactory
{
public:
	virtual Door* CarDoor() =0;
	virtual Engine* CarEngine() = 0;
};

class GasFactory :public CarFactory
{
	virtual Door* CarDoor();
	virtual Engine* CarEngine();
};

class ElectricFactory :public CarFactory
{
	virtual Door* CarDoor();
	virtual Engine* CarEngine();
};
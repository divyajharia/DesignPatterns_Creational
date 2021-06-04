#pragma once
#include<iostream>
using namespace std;

class Entree
{
protected:
	char _entree[256];
public:
	const char* getEntree();	
};

class Burger : public Entree
{public:
	Burger();
};

class HotDog :public Entree
{
public:
	HotDog();
};


class Drink
{
	char drink[256] = "COKE" ;
public:
	Drink();
	const char* getDrink() { return drink; };
};


/// <summary>
/// Creating the Meal Combo class which will be the place to assemble the steps of combo 
/// </summary>
class MealCombo
{
private:
	Entree* entree;
	Drink* drink;
	char _bag[256];
public:
	MealCombo(const char * type);
	~MealCombo() {};
	void setEntree(Entree * e);
	void setDrink(Drink * d);
	const char* openMealBag();


};

#pragma region Builders
//Base Builder 

class MealBuilder
{
public:
	virtual void cookEntree() {};
	virtual void fillDrink() {};
	MealCombo* getMeal()
	{
		return _meal;
	}

private:
protected:
	MealCombo* _meal;

};

class BurgerMeal :public MealBuilder
{
public:
	BurgerMeal()
	{
		_meal = new MealCombo("Burger");
	}
	void cookEntree()
	{
		Burger* burger = new Burger();
		_meal->setEntree(burger);
	}
	void fillDrink()
	{
		Drink* drink = new Drink();
		_meal->setDrink(drink);
	}
	

private:

};

class HotDogMeal :public MealBuilder
{
public:
	HotDogMeal()
	{
		_meal = new MealCombo("HotDog");
	}
	void cookEntree()
	{
		HotDog* hotdo = new HotDog();
		_meal->setEntree(hotdo);
	}
	void fillDrink()
	{
		Drink* drink = new Drink();
		_meal->setDrink(drink);
	}
};
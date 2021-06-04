#include "Builder.h"

const char* Entree::getEntree()
{
	return _entree;
}

Burger::Burger()
{
	puts("Making Tasty Burgers");
	strcpy_s(_entree, "Burgreer");
}

HotDog::HotDog()
{
	puts("HotDog on your way !!");
	strcpy_s(_entree, "HotDog");
}

Drink::Drink()
{
	puts("Coke on the way");
}

MealCombo::MealCombo(const char* type) : entree(NULL), drink(NULL)
{
	sprintf_s(_bag, "Meal combo : %s", type);
}

void MealCombo::setDrink(Drink* d)
{
	drink = d;
}

const char* MealCombo::openMealBag()
{
	sprintf_s(_bag, "Entree : %s, Dirink : %s ", entree->getEntree(), drink->getDrink());
	return _bag;
}

void MealCombo::setEntree(Entree * e)
{
	entree = e;
}

//////////////////////////////////////////////////////////
/////INT Main()

//MealBuilder* cook = new MealBuilder;
//MealCombo* meal;
//int choice = 0;
//puts("Select a Meal Type :");
//puts("1: Burger !");
//puts("2: HotDog");
//puts("Type in your choice !!! -");
//cin >> choice;
//
//switch (choice)
//{
//case 1:
//	cook = new BurgerMeal;
//	break;
//case 2:
//	cook = new HotDogMeal;
//	break;
//default:
//	puts("Invallidd!!!!!!!!!!!!!");
//	cook = NULL;
//	break;
//
//}
//
//if (cook)
//{
//	cook->cookEntree();
//	cook->fillDrink();
//	meal = cook->getMeal();
//	cout << "Meal in bag" << meal->openMealBag();
//}
//}
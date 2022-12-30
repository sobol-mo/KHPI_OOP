#include "Animal.h"

//Конструктор з параметрами за замовчуванням
Animal::Animal(const string& name, const int weight)
{
	this->name = name;
	this->weight = weight;
}

//Конструктор копіювання
Animal::Animal(const Animal& animal)
{
	this->name = animal.name;
	this->weight = animal.weight;
}

//Група гетерів класу
string Animal::getName() const
{
	return this->name;
}

int Animal::getWeight() const
{
	return this->weight;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Animal& animal)
{
	return out << "Назва тварини: " << animal.name
		<< ", вага: " << animal.weight;
}
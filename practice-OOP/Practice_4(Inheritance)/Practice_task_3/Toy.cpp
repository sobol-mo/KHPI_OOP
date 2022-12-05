#include "Toy.h"

//Конструктор з параметрами
Toy::Toy(const string& name, const int price)
{
	this->name = name;
	this->price = (price >= 0 ? price : 0);
}

//Група "гетерів"
string Toy::getName() const
{
	return name;
}

int Toy::getPrice() const
{
	return price;
}

//Група "сетерів"
void Toy::setName(const string& name)
{
	this->name = name;
}

void Toy::setPrice(const int price)
{
	this->price = (price >= 0 ? price : 0);
}
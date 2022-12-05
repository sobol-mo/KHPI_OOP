#include "Fruit.h"

//Конструктор з параметром
Fruit::Fruit(const string& variery, const int price)
{
	this->variety = variery;
	this->price = price;
}

//Функції доступу до поля
int Fruit::getPrice() const
{
	return this->price;
}

void Fruit::setPrice(const int price)
{
	this->price = price;
}

//Перевантаження операції потокового виводу
ostream& operator<<(ostream& out,const Fruit& fruit)
{
	fruit.printInfo();
	return out;
}
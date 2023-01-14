#include "Car.h"

//Конструктор з параметрами
Car::Car(const string& carBrand,const int price)
{
	this->carBrand = carBrand;
	this->price = price;
}

//Група "гетерів"
string Car::getBrand() const
{
	return this->carBrand;
}

int Car::getPrice() const
{
	return this->price;
}

//Група "сетерів"
void Car::setBrand(const string& carBrand)
{
	this->carBrand = carBrand;
}

void Car::setPrice(const int price)
{
	this->price = price;
}

//Перевантаження оператора(=)
Car* Car::operator=(const Car& car)
{
	this->carBrand = car.carBrand;
	this->price = car.price;

	return this;
}
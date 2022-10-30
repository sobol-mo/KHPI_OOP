#include "Car.h"

//����������� � �����������
Car::Car(string carBrand, int price)
{
	this->carBrand = carBrand;
	this->price = price;
}

//����� "������"
string Car::getBrand() const
{
	return this->carBrand;
}

int Car::getPrice() const
{
	return this->price;
}

//����� "������"
void Car::setBrand(const string& carBrand)
{
	this->carBrand = carBrand;
}

void Car::setPrice(const int price)
{
	this->price = price;
}

//�������������� ���������(=)
Car* Car::operator=(const Car& car)
{
	this->carBrand = car.carBrand;
	this->price = car.price;

	return this;
}
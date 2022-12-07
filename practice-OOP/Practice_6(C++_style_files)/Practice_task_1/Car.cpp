#include "Car.h"

//Конструктор з параметрами
Car::Car(const string& brand, const double carPower, const int price)
{
	this->brand = brand;
	this->enginePower = carPower;
	this->price = price;
}

//Група "гетерів"
string Car::getBrand() const
{
	return this->brand;
}

double Car::getEnginePower() const
{
	return this->enginePower;
}

int Car::getPrice() const
{
	return this->price;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Car& car)
{
	out << "Бренд: " << car.brand << " ,потужність: " << car.enginePower
		<< " ,ціна: " << car.price;

	return out;
}
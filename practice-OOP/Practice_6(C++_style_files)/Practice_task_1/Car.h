#pragma once

#include <iostream>
using namespace std;

class Car
{
private:

	//Бренд автомобіля
	string brand;

	//Потужність
	double enginePower;

	//Ціна
	int price;

public:

	//Конструктор з параметрами
	Car(const string& brand, const double enginePower,
		const int price);

	//Група "гетерів"
	string getBrand() const;
	double getEnginePower() const;
	int getPrice() const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Car& car);

};
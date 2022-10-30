#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Car
{
private:
	string carBrand;
	int price;

public:
	//Конструктор з параметрами
	Car(string carBrand = "brand1", int price = 10);

	//Група "гетерів"
	string getBrand() const;
	int getPrice() const;

	//Група "сетерів"
	void setBrand(const string& carBrand);
	void setPrice(const int price);

	//Перевантаження оператора(=)
	Car* operator=(const Car& car);
};
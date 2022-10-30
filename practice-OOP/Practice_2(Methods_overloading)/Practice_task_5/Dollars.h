#pragma once

#include <iostream>
#include <Windows.h>


using namespace std;
class Cents;

class Dollars
{
private:
	int numberOfDollars;

public:
	//Конструктор з параметрами
	Dollars(const int dollars = 0);

	//Конструктор копіювання
	Dollars(const Dollars& dollars);

	//Гетер
	int getDollars() const;

	//Сетер
	void setDollars(const int dollars);

	//Перевантаження операторів
	Dollars operator+(const Dollars& dollars);
	Dollars operator+(const Cents& cents);
	Dollars* operator=(const Dollars& dollars);
	bool operator==(const Dollars& dollars);

};
#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;
class Dollars;

class Cents
{
private:
	int numberOfCents;

public:
	//Конструктор з параметрами
	Cents(const int cents = 0);

	//Конструктор копіювання
	Cents(const Cents& cents);

	//Гетер
	int getCents() const;

	//Сетер
	void setCents(const int cents);

	//Перевантаження операторів
	Cents operator+(const Cents& cents);
	Cents operator+(const Dollars& dollars);
	void operator()(const bool flag);
};


#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

#define PI 3.1415

class Circle
{
private:
	int radius;

public:
	//Конструктор з параметром
	Circle(const int radius = 1);
	
	//Конструктор копіювання
	Circle(const Circle& circle);

	//Гетер 
	int getRadius() const;

	//Функція підрахунку площі
	double areaCalc() const;

	//Функція підрахунку довжини окружності
	double circumferenceCalc() const;

	//Перевантаження оператора(=)
	Circle& operator=(const Circle& circle);

	//Перевантаження операторів через дружні функції
	friend Circle operator+(const Circle& circle, const int value);
	friend ostream& operator<<(ostream& out, const Circle& circle);
	friend istream& operator>>(istream& in, Circle& circle);
};
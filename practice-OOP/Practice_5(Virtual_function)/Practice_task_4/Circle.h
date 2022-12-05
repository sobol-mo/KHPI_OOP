#pragma once

#include "Figure.h"

#define PI 3.1415

class Circle : public Figure
{
public:

	//Конструктор з параметром
	Circle(const double diameter);

	//Перевизначення віртуальної функції пошуку площі
	virtual double getArea() const override;

	//Перевизначення віртуальної функції пошуку периметру
	virtual double getPerimeter() const override;

	//Функція підрахунку радіусу
	double getRadius() const;
};
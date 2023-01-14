#pragma once

#include "Figure.h"

class Square : public Figure
{
public:

	//Конструктор з параметром
	Square(const double diameter);

	//Перевизначення віртуальної функції пошуку площі
	virtual double getArea() const override;

	//Перевизначення віртуальної функції пошуку периметру
	virtual double getPerimeter() const override;

	//Функція підрахунку сторони квадрата
	double getSide() const;
};
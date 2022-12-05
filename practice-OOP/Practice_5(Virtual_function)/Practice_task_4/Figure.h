#pragma once

#include <math.h>
using namespace std;

class Figure
{
protected:

	//Діаметр
	double diameter;

public:

	//Конструктор з параметром
	Figure(const double diameter = 1);

	//Група функції доступу до полів
	void setDiameter(const double diameter);
	double getDiameter() const;

	//Чиста віртуальная функція підрахунку площі
	virtual double getArea() const = 0;

	//Чиста віртуальна функція підраухнку периметру
	virtual double getPerimeter() const = 0;

};
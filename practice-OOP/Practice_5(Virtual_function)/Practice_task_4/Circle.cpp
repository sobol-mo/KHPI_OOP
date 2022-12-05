#include "Circle.h"

//Конструктор з параметром
Circle::Circle(const double diameter) :
	Figure(diameter)
{
}

//Реалізація функції пошуку площі
double Circle::getArea() const
{
	return PI * pow(this->getRadius() , 2) ;
}

//Реалізація функції пошуку периметру
double Circle::getPerimeter() const
{
	return PI * this->getRadius() * 2;
}

//Функція підрахунку радіусу
double Circle::getRadius() const
{
	return diameter / 2;
}
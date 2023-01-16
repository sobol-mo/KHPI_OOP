#include "Square.h"

//Конструктор з параметром
Square::Square(const double diameter) :
	Figure(diameter)
{
}

//Реалізація функції пошуку площі
double Square::getArea() const
{
	return pow(this->getSide(), 2);
}

//Реалізація функції пошуку периметру
double Square::getPerimeter() const
{
	return this->getSide() * 4;
}

//Функція підрахунку сторони квадрата
double Square::getSide() const
{
	return diameter / sqrt(2);
}
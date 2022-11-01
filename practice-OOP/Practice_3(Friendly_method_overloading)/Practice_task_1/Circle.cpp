#include "Circle.h"

//Конструктор з параметром
Circle::Circle(const int radius)
{
	this->radius = radius;
}

//Конструктор копіювання
Circle::Circle(const Circle& circle)
{
	this->radius = circle.radius;
}

//Гетер поля класу
int Circle::getRadius() const
{
	return this->radius;
}

//Функція підрахунку площі
double Circle::areaCalc() const
{
	return PI * radius * radius;
}

//Функція підрахунку довжини окружності
double Circle::circumferenceCalc() const
{
	return 2 * PI * radius;
}

//Перевантаження оператора(=) 
Circle& Circle::operator=(const Circle& circle)
{
	this->radius = circle.radius;

	return *this;
}

//Перевантаження оператора(+) 
Circle operator+(const Circle& circle, const int value)
{
	return Circle(circle.radius + value);
}

//Перевантаження оператора(<<) 
ostream& operator<<(ostream& out, const Circle& circle)
{
	out << circle.radius;

	return out;
}

//Перевантаження оператора(>>) 
istream& operator>>(istream& in, Circle& circle)
{
	in >> circle.radius;

	return in;
}
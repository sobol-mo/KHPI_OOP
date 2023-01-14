#include "Point.h"

//Конструктор з параметрами за замовчуванням
Point::Point(const int x, const int y)
{
	this->x = x;
	this->y = y;
}

//Конструктор копіювання
Point::Point(const Point& point)
{
	this->x = point.x;
	this->y = point.y;
}

//Перевантаження оператора(<), який порівнює суму координат
bool Point::operator<(const Point& point) const
{
	return (this->x + this->y) < (point.x + point.y);
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Point& point)
{
	return out << " X = " << point.x 
	           << ", Y = " << point.y;
}
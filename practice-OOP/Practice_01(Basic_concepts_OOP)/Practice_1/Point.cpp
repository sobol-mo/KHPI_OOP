#include "Point.h"


//Базовий конструктор
Point::Point() : x(0), y(0)
{
}


//Конструктор з параметрами
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

//Група "сетерів"
void Point::setX(const int x) { this->x = x; }
void Point::setY(const int y) { this->y = y; }

//Група "гетерів"
int Point::getX() const { return x; }
int Point::getY() const { return y; }

//Метод копіювання іншого об'єкту
void Point::copy(const Point& point)
{
	this->x = point.x;
	this->y = point.y;
}

//Метод виведення даних
void Point::show() const
{
	cout << " X =" << setw(3) << x
		<< "  Y =" << setw(3) << y << endl;
}
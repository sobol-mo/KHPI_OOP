#include "Point.h"


//Базовий конструктор
Point::Point() : m_x(0), m_y(0)
{
}


//Конструктор з параметрами
Point::Point(const int x, const int y) :
	m_x(x), m_y(y)
{
}

//Конструктор копіювання
Point::Point(const Point& point) :
	m_x(point.m_x), m_y(point.m_y)
{
}

//Група "сетерів"
void Point::setX(const int x) { m_x = x; }
void Point::setY(const int y) { m_y = y; }

//Група "гетерів"
int Point::getX() const { return m_x; }
int Point::getY() const { return m_y; }

//Метод копіювання іншого об'єкту
void Point::copy(const Point& point)
{
	m_x = point.m_x;
	m_y = point.m_y;
}

//Метод виведення даних
void Point::show() const
{
	cout << " X =" << setw(3) << m_x
		<< "  Y =" << setw(3) << m_y << endl;
}
#pragma once

#include <iostream>
using namespace std;

class Point
{
private:

	//Координати точки
	int x;
	int y;

public:

	//Конструктор з параметрами за замовчуванням
	Point(const int x = 0, const int y = 0);

	//Конструктор копіювання
	Point(const Point& point);

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Point& point);

	//Перевантаження оператора(<), який порінює суму координат
	bool operator<(const Point& point) const;
};
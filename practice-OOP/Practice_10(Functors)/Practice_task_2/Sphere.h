#pragma once

#include <iostream>
using namespace std;

class Sphere
{
private:

	//Колір кулі
	string color;

	//Об'єм кулі
	double volume;

public:

	//Конструктор з параметрами за замовчуваням
	Sphere(const string& color = "",
	       const double volume = 0);

	//Конструктор копіювання
	Sphere(const Sphere& sphere);

	//Перевантаження оператора(<)
	friend bool operator<(const Sphere& firstSphere, 
	                      const Sphere& secondSphere);

	//Функтор, порівнює об'єм куль
	bool operator()(const Sphere& firstSphere,
	                const Sphere& secondSphere) const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Sphere& sphere);
};


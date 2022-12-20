#include "Sphere.h"

//Конструктор з параметрами за замовчуваням
Sphere::Sphere(const string& color, const double volume)
{
	this->color = color;
	this->volume = volume;
}

//Конструктор копіювання
Sphere::Sphere(const Sphere& sphere)
{
	this->color = sphere.color;
	this->volume = sphere.volume;
}

//Функтор, порівнює об'єм куль
bool Sphere::operator()(const Sphere& firstSphere, const Sphere& secondSphere) const
{
	return firstSphere.volume > secondSphere.volume;
}

//Перевантаження оператора(<)
//порівнює назви кольорів
bool operator<(const Sphere& firstSphere, const Sphere& secondSphere)
{
	return firstSphere.color < secondSphere.color;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Sphere& sphere)
{
	return out << "Колір кулі: " << sphere.color
		<< " ,об'єм: " << sphere.volume;
}

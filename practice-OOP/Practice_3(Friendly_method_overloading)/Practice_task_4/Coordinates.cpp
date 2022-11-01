#include "Coordinates.h"

//Конструктор з параметрами
Coordinates::Coordinates(const int x, const int y, const int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

//Конструктор копіювання
Coordinates::Coordinates(const Coordinates& coord)
{
	this->x = coord.x;
	this->y = coord.y;
	this->z = coord.z;
}

//Перевантаження оператора(=)
Coordinates& Coordinates::operator=(const Coordinates& coord)
{
	this->x = coord.x;
	this->y = coord.y;
	this->z = coord.z;

	return *this;
}

//Перевантаження оператора(++)
Coordinates& Coordinates::operator++(int)
{
	this->x++;
	this->y++;
	this->z++;

	return *this;
}

//Перевантаження оператора(--)
Coordinates& Coordinates::operator--()
{
	this->x--;
	this->y--;
	this->z--;

	return *this;
}

//Перевантаження оператора(+)
Coordinates operator+(const Coordinates& firstCoord, const Coordinates& secondCoord)
{
	Coordinates tempCoord;
	tempCoord.x = firstCoord.x + secondCoord.x;
	tempCoord.y = firstCoord.y + secondCoord.y;
	tempCoord.z = firstCoord.z + secondCoord.z;

	return tempCoord;
}

//Перевантаження оператора(-)
Coordinates operator-(const Coordinates& firstCoord, const Coordinates& secondCoord)
{
	Coordinates tempCoord;
	tempCoord.x = firstCoord.x - secondCoord.x;
	tempCoord.y = firstCoord.y - secondCoord.y;
	tempCoord.z = firstCoord.z - secondCoord.z;

	return tempCoord;
}

//Перевантаження оператора(*)
Coordinates operator*(const Coordinates& coord, const int number)
{
	Coordinates tempCoord;
	tempCoord.x = coord.x * number;
	tempCoord.y = coord.y * number;
	tempCoord.z = coord.z * number;

	return tempCoord;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Coordinates& coord)
{
	out << "(" << coord.x << ", " << coord.y << ", " << coord.z << ")";

	return out;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, Coordinates& coord)
{
	in >> coord.x >> coord.y >> coord.z;
	
	return in;
}
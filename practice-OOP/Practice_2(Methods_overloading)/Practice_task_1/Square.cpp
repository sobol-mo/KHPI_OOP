#include "Square.h"

//Конструктор за замовчуванням
Square::Square():
	side(5)
{
}

//Конструктор з параметрами
Square::Square(const int side)
{
	this->side = side;
}

//Конструктор копіювання
Square::Square(const Square& sqre)
{
	this->side = sqre.side;
}

//"гетер"
int Square::getSide() const
{
	return side;
}

//"сетер"
void Square::setSide(const int side)
{
	this->side = side;
}

//Перевантаження оператора(+)
Square Square::operator+(const Square& sqre)
{
	return Square(side + sqre.side);
}

//Перевантаження оператора(-)
Square Square::operator-(const Square& sqre)
{
	return Square(side - sqre.side);
}

//Перевантаження оператора(*)
Square Square::operator*(const Square& sqre)
{
	return Square(side * sqre.side);
}

//Перевантаження оператора(=)
Square Square::operator=(const Square& sqre)
{
	side = sqre.side;
	return *this;
}

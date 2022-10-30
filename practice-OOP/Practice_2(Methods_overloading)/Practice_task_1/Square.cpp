#include "Square.h"

//����������� �� �������������
Square::Square():
	side(5)
{
}

//����������� � �����������
Square::Square(const int side)
{
	this->side = side;
}

//����������� ���������
Square::Square(const Square& sqre)
{
	this->side = sqre.side;
}

//"�����"
int Square::getSide() const
{
	return side;
}

//"�����"
void Square::setSide(const int side)
{
	this->side = side;
}

//�������������� ���������(+)
Square Square::operator+(const Square& sqre)
{
	return Square(side + sqre.side);
}

//�������������� ���������(-)
Square Square::operator-(const Square& sqre)
{
	return Square(side - sqre.side);
}

//�������������� ���������(*)
Square Square::operator*(const Square& sqre)
{
	return Square(side * sqre.side);
}

//�������������� ���������(=)
Square Square::operator=(const Square& sqre)
{
	side = sqre.side;
	return *this;
}

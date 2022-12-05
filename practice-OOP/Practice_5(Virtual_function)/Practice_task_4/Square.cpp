#include "Square.h"

//����������� � ����������
Square::Square(const double diameter) :
	Figure(diameter)
{
}

//��������� ������� ������ �����
double Square::getArea() const
{
	return pow(this->getSide(), 2);
}

//��������� ������� ������ ���������
double Square::getPerimeter() const
{
	return this->getSide() * 4;
}

//������� ��������� ������� ���������
double Square::getSide() const
{
	return diameter / sqrt(2);
}
#include "Circle.h"

//����������� � ����������
Circle::Circle(const double diameter) :
	Figure(diameter)
{
}

//��������� ������� ������ �����
double Circle::getArea() const
{
	return PI * pow(this->getRadius() , 2) ;
}

//��������� ������� ������ ���������
double Circle::getPerimeter() const
{
	return PI * this->getRadius() * 2;
}

//������� ��������� ������
double Circle::getRadius() const
{
	return diameter / 2;
}
#include "Circle.h"

//����������� � ����������
Circle::Circle(const int radius)
{
	this->radius = radius;
}

//����������� ���������
Circle::Circle(const Circle& circle)
{
	this->radius = circle.radius;
}

//����� ���� �����
int Circle::getRadius() const
{
	return this->radius;
}

//������� ��������� �����
double Circle::areaCalc() const
{
	return PI * radius * radius;
}

//������� ��������� ������� ���������
double Circle::circumferenceCalc() const
{
	return 2 * PI * radius;
}

//�������������� ���������(=) 
Circle& Circle::operator=(const Circle& circle)
{
	this->radius = circle.radius;

	return *this;
}

//�������������� ���������(+) 
Circle operator+(const Circle& circle, const int value)
{
	return Circle(circle.radius + value);
}

//�������������� ���������(<<) 
ostream& operator<<(ostream& out, const Circle& circle)
{
	out << circle.radius;

	return out;
}

//�������������� ���������(>>) 
istream& operator>>(istream& in, Circle& circle)
{
	in >> circle.radius;

	return in;
}
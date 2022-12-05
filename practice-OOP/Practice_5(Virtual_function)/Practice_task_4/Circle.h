#pragma once

#include "Figure.h"

#define PI 3.1415

class Circle : public Figure
{
public:

	//����������� � ����������
	Circle(const double diameter);

	//�������������� ��������� ������� ������ �����
	virtual double getArea() const override;

	//�������������� ��������� ������� ������ ���������
	virtual double getPerimeter() const override;

	//������� ��������� ������
	double getRadius() const;
};
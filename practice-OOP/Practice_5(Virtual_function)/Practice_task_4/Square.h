#pragma once

#include "Figure.h"

class Square : public Figure
{
public:

	//����������� � ����������
	Square(const double diameter);

	//�������������� ��������� ������� ������ �����
	virtual double getArea() const override;

	//�������������� ��������� ������� ������ ���������
	virtual double getPerimeter() const override;

	//������� ��������� ������� ���������
	double getSide() const;
};
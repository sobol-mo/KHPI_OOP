#pragma once

#include <math.h>
using namespace std;

class Figure
{
protected:

	//ĳ�����
	double diameter;

public:

	//����������� � ����������
	Figure(const double diameter = 1);

	//����� ������� ������� �� ����
	void setDiameter(const double diameter);
	double getDiameter() const;

	//����� ���������� ������� ��������� �����
	virtual double getArea() const = 0;

	//����� ��������� ������� ��������� ���������
	virtual double getPerimeter() const = 0;

};
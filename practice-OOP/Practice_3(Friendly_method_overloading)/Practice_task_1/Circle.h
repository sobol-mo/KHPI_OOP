#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

#define PI 3.1415

class Circle
{
private:
	int radius;

public:
	//����������� � ����������
	Circle(const int radius = 1);
	
	//����������� ���������
	Circle(const Circle& circle);

	//����� 
	int getRadius() const;

	//������� ��������� �����
	double areaCalc() const;

	//������� ��������� ������� ���������
	double circumferenceCalc() const;

	//�������������� ���������(=)
	Circle& operator=(const Circle& circle);

	//�������������� ��������� ����� ����� �������
	friend Circle operator+(const Circle& circle, const int value);
	friend ostream& operator<<(ostream& out, const Circle& circle);
	friend istream& operator>>(istream& in, Circle& circle);
};
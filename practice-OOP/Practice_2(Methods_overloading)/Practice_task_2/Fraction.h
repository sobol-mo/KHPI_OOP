#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Fraction
{
private:
	int numerator;
	int denominator;

public:
	//����������� �� �������������
	Fraction();

	//����������� � �����������
	Fraction(const int numer, const int denom);

	//����������� ���������
	Fraction(const Fraction& fr);

	//������ "������"
	void setNumerator(const int numer);
	void setDenominator(const int denom);

	//����� ����� �����
	void printFraction() const;

	//�������������� ���������
	Fraction operator+(const Fraction& fr);
	Fraction operator-(const Fraction& fr);
	Fraction operator*(const Fraction& fr);
	Fraction operator/(const Fraction& fr);
	Fraction operator=(const Fraction& fr);
};


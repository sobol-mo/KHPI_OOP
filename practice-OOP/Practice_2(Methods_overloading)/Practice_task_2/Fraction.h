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
	//Конструктор за замовчуванням
	Fraction();

	//Конструктор з параметрами
	Fraction(const int numer, const int denom);

	//Конструктор копіювання
	Fraction(const Fraction& fr);

	//Группа "сетерів"
	void setNumerator(const int numer);
	void setDenominator(const int denom);

	//Метод друку дробу
	void printFraction() const;

	//Перевантаження операторів
	Fraction operator+(const Fraction& fr);
	Fraction operator-(const Fraction& fr);
	Fraction operator*(const Fraction& fr);
	Fraction operator/(const Fraction& fr);
	Fraction operator=(const Fraction& fr);
};


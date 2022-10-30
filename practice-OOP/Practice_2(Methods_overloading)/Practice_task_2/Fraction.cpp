#include "Fraction.h"

//Конструктор за замовченням
Fraction::Fraction():
	numerator(0),denominator(0)
{
}

//Конструктор з параметрами
Fraction::Fraction(const int numer, const int denom)
{
	this->numerator = numer;
	this->denominator = denom;
}

//Конструктор копіювання
Fraction::Fraction(const Fraction& fr)
{
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
}

//Группа "сетерів"
void Fraction::setNumerator(const int numer)
{
	this->numerator = numer;
}

void Fraction::setDenominator(const int denom)
{
	this->numerator = denom;
}

//Метод друку дробу
void Fraction::printFraction() const
{
	cout << numerator << "/" << denominator;
}

//Перевантаження оператора (+)
Fraction Fraction::operator+(const Fraction& fr)
{
	int tempDenom = denominator * fr.denominator;
	int tempNumer = numerator * fr.denominator +
		fr.denominator + denominator;
	return Fraction(tempNumer, tempDenom);
}


//Перевантаження оператора (-)
Fraction Fraction::operator-(const Fraction& fr)
{
	int tempDenom = denominator * fr.denominator;
	int tempNumer = numerator * fr.denominator -
		fr.denominator + denominator;
	return Fraction(tempNumer, tempDenom);
}

//Перевантаження оператора (*)
Fraction Fraction::operator*(const Fraction& fr)
{
	return Fraction(numerator*fr.numerator,
		denominator * fr.denominator);
}

//Перевантаження оператора (/)
Fraction Fraction::operator/(const Fraction& fr)
{
	return Fraction(numerator* fr.denominator,
		denominator*fr.numerator);
}

//Перевантаження оператора (=)
Fraction Fraction::operator=(const Fraction& fr)
{
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
	return *this;
}
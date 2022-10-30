#include "Fraction.h"

//����������� �� �����������
Fraction::Fraction():
	numerator(0),denominator(0)
{
}

//����������� � �����������
Fraction::Fraction(const int numer, const int denom)
{
	this->numerator = numer;
	this->denominator = denom;
}

//����������� ���������
Fraction::Fraction(const Fraction& fr)
{
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
}

//������ "������"
void Fraction::setNumerator(const int numer)
{
	this->numerator = numer;
}

void Fraction::setDenominator(const int denom)
{
	this->numerator = denom;
}

//����� ����� �����
void Fraction::printFraction() const
{
	cout << numerator << "/" << denominator;
}

//�������������� ��������� (+)
Fraction Fraction::operator+(const Fraction& fr)
{
	int tempDenom = denominator * fr.denominator;
	int tempNumer = numerator * fr.denominator +
		fr.denominator + denominator;
	return Fraction(tempNumer, tempDenom);
}


//�������������� ��������� (-)
Fraction Fraction::operator-(const Fraction& fr)
{
	int tempDenom = denominator * fr.denominator;
	int tempNumer = numerator * fr.denominator -
		fr.denominator + denominator;
	return Fraction(tempNumer, tempDenom);
}

//�������������� ��������� (*)
Fraction Fraction::operator*(const Fraction& fr)
{
	return Fraction(numerator*fr.numerator,
		denominator * fr.denominator);
}

//�������������� ��������� (/)
Fraction Fraction::operator/(const Fraction& fr)
{
	return Fraction(numerator* fr.denominator,
		denominator*fr.numerator);
}

//�������������� ��������� (=)
Fraction Fraction::operator=(const Fraction& fr)
{
	this->numerator = fr.numerator;
	this->denominator = fr.denominator;
	return *this;
}
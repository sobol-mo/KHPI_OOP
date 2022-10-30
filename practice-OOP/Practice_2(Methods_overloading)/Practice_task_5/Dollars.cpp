#include "Dollars.h"
#include "Cents.h"

//����������� � �����������
Dollars::Dollars(const int dollars)
{
	this->numberOfDollars = dollars;
}

//����������� ���������
Dollars::Dollars(const Dollars& dollars)
{
	this->numberOfDollars =
		dollars.numberOfDollars;
}

//�����
int Dollars::getDollars() const
{
	return this->numberOfDollars;
}

//�����
void Dollars::setDollars(const int dollars)
{
	this->numberOfDollars = dollars;
}

//�������������� ���������(+)
Dollars Dollars::operator+(const Dollars& dollars)
{
	return Dollars(this->numberOfDollars
		+ dollars.numberOfDollars);
}

//�������������� ���������(+)
Dollars Dollars::operator+(const Cents& cents)
{
	return (this->numberOfDollars + cents.getCents()/100);
}

//�������������� ���������(=)
Dollars* Dollars::operator=(const Dollars& dollars)
{
	this->numberOfDollars = dollars.numberOfDollars;

	return this;
}

//�������������� ���������(==)
bool Dollars::operator==(const Dollars& dollars)
{
	return (this->numberOfDollars == dollars.numberOfDollars);
}

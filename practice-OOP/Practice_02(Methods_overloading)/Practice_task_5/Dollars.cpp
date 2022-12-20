#include "Dollars.h"
#include "Cents.h"

//Конструктор з параметрами
Dollars::Dollars(const int dollars)
{
	this->numberOfDollars = dollars;
}

//Конструктор копіювання
Dollars::Dollars(const Dollars& dollars)
{
	this->numberOfDollars =
		dollars.numberOfDollars;
}

//Гетер
int Dollars::getDollars() const
{
	return this->numberOfDollars;
}

//Сетер
void Dollars::setDollars(const int dollars)
{
	this->numberOfDollars = dollars;
}

//Перевантаження оператора(+)
Dollars Dollars::operator+(const Dollars& dollars)
{
	return Dollars(this->numberOfDollars
		+ dollars.numberOfDollars);
}

//Перевантаження оператора(+)
Dollars Dollars::operator+(const Cents& cents)
{
	return (this->numberOfDollars + cents.getCents()/100);
}

//Перевантаження оператора(=)
Dollars* Dollars::operator=(const Dollars& dollars)
{
	this->numberOfDollars = dollars.numberOfDollars;

	return this;
}

//Перевантаження оператора(==)
bool Dollars::operator==(const Dollars& dollars)
{
	return (this->numberOfDollars == dollars.numberOfDollars);
}

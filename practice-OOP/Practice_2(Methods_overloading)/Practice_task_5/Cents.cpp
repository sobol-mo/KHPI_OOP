#include "Cents.h"
#include "Dollars.h"

//Конструктор з параметрами
Cents::Cents(const int cents)
{
	this->numberOfCents = cents;
}

//Конструктор копіювання
Cents::Cents(const Cents& cents)
{
	this->numberOfCents =
		cents.numberOfCents;
}

//Гетер
int Cents::getCents() const
{
	return this->numberOfCents;
}

//Сетер
void Cents::setCents(const int cents)
{
	this->numberOfCents = cents;
}

//Перевантаження оператора(+)
Cents Cents::operator+(const Cents& cents)
{
	return Cents(this->numberOfCents 
		+ cents.numberOfCents);
}

//Перевантаження оператора(+)
Cents Cents::operator+(const Dollars& dollars)
{
	return Cents(this->numberOfCents 
		+ dollars.getDollars() * 100);
}

//Перевантаження оператора("()")
void Cents::operator()(const bool flag)
{
	if (flag == 1) {
		
		while (1)
		{	
			//Якщо кількість націло ділиться
			//на 100 -> виходимо з циклу
			if (numberOfCents % 100 == 0) {
				break;
			}
			numberOfCents++;
		}
	}
	else {

		while (1)
		{
			if (numberOfCents % 100 == 0) {
				break;
			}
			numberOfCents--;
		}
	}
}
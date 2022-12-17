#include "Date.h"

//Конструктор з параметрами за замовчуванням
Date::Date(const int day, const int month, const int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

//Конструктор копіювання
Date::Date(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

//Перевантаження оператора(=)
Date& Date::operator=(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;

	return *this;
}

//Гетер для року
int Date::getYear() const
{
	return this->year;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Date& date)
{
	return out << date.day << "." << date.month
		<< "." << date.year;
}

//Перевантаження оператора(==)
bool operator==(const Date& firstDate, const Date& secondDate)
{
	return (firstDate.day == secondDate.day) && (firstDate.month == secondDate.month)
				&& (firstDate.year == secondDate.year);
}
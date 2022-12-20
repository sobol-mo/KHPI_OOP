#include "Date.h"

//Конструктор за замовчуванням
Date::Date():
	day(1),month(1),year(1)
{
}

//Конструктор з параметрами
Date::Date(const int day, const int month, const int year)
{
	this->day = ((day > 31 || day < 1) ? 31 : day);
	this->month = ((month > 12 || month < 1) ? 12 : month);
	this->year = (year <= 0 ? 1 : year);
}

//Конструктор копіювання
Date::Date(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

//Група "сетерів"
void Date::setDay(const int day)
{
	this->day = (day > 31 ? 31 : day);
}

void Date::setMonth(const int month)
{
	this->month = (month > 12 ? 12 : month);
}

void Date::setYear(const int year)
{
	this->year = (year <= 0 ? 1 : year);
}

//Метод друку дати
void Date::printDate() const
{
	cout << day <<
		"." << month << "." <<
	    year << endl;
}

//Перевантаження оператора(-)
Date Date::operator-(const Date& date)
{
	int year = this->year - date.year;
	year = (year <= 0 ? 1 : year);

	int month = this->month - date.month;
	if (month <= 0) {
		year--;
		month += 12;
	}

	int day = this->day - date.day;
	if (day <= 0) {
		month--;
		day += 30;
	}

	return Date(day, month, year);
}

//Перевантаження оператора(==)
bool Date::operator==(const Date& date) const
{
	return (day == date.day) && (month == date.month) 
		&& (year == date.year);
}

//Перевантаження оператора(!=)
bool Date::operator!=(const Date& date) const
{
	return !(*this == date);
}

//Перевантаження оператора(>)
bool Date::operator>(const Date& date) const
{
	return (day > date.day) && (month > date.month)
		&& (year > date.year);
}

//Перевантаження оператора(<)
bool Date::operator<(const Date& date)const
{
	return (day < date.day) && (month < date.month)
		&& (year < date.year);
}

//Перевантаження оператора(>=)
bool Date::operator>=(const Date& date) const
{
	return !(*this < date);
}

//Перевантаження оператора(<=)
bool Date::operator<=(const Date& date)const
{
	return !(*this > date);
}

//Перевантаження оператора(=)
Date Date::operator=(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	return *this;
}

//Перевантаження оператора("()")
void Date::operator()(const int day, const int month, const int year)
{
	this->day = ((day > 31 || day < 1) ? 31 : day);
	this->month = ((month > 12 || month < 1) ? 12 : month);
	this->year = (year <= 0 ? 1 : year);
}
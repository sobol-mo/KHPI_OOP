#pragma once

#include <iostream>
using namespace std;

class Date
{
private:

	//День
	int day;

	//Місяць
	int month;

	//Рік
	int year;

public:

	//Конструктор з параметрами за замовчуванням
	Date(const int day = 1, const int month = 1,
	     const int year = 1);

	//Конструктор копіювання
	Date(const Date& date);

	//Гетер для року
	int getYear() const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Date& date);

	//Перевантаження оператора(=)
	Date& operator=(const Date& date);

	//Перевантаження оператора(==)
	friend bool operator==(const Date& firstDate, const Date& secondDate);
};
#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;

public:
	//Конструктор за замовчуванням
	Date();

	//Конструктор з параметрами
	Date(const int day, const int month, const int year);
	 
	//Конструктор копіювання
	Date(const Date& date);

	//Група "сетерів"
	void setDay(const int day);
	void setMonth(const int month);
	void setYear(const int year);

	//Метод друку дати
	void printDate() const;

	//Перевантаження операторів(через методи)
	Date operator- (const Date& date);
	bool operator== (const Date& date) const;
	bool operator!= (const Date& date) const;
	bool operator> (const Date& date) const;
	bool operator< (const Date& date) const;
	bool operator>= (const Date& date) const;
	bool operator<= (const Date& date) const;
	Date operator= (const Date& date);
	void operator() (const int day, 
		const int month, const int year);
};


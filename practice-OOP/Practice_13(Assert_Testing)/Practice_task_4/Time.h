#pragma once

#include <iostream>
#include <assert.h>
using namespace std;

class Time
{
private:

	//Години
	int hours;

	//Хвилини
	int minutes;

	//Секунди
	int seconds;

public:

	//Конструктор з параметром за замовчуванням
	Time(const int hours = 0, 
	     const int minutes = 0, 
	     const int seconds = 0);

	//Група сетерів класу
	Time& setHours(const int hours);
	Time& setMinutes(const int minutes);
	Time& setSeconds(const int seconds);

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Time& time);

	//Перевантаження оператора(==) для порівняння часу
	bool operator==(const Time& time) const;
};
#pragma once

#include "Date.h"

class Person
{
private:

	//Прізвище
	string secondName;

	//День народження
	Date birthday;

public:

	//Конструктор з параметрами за замовчуванням
	Person(const string& secondName = "", const int day = 1,
		const int month = 1, const int year = 1);

	//Конструктор копіювання
	Person(const Person& person);

	//Група "гетерів" класу
	string getSecondName() const;
	Date getBirthday() const;

	//Перевантаження оператора(=)
	Person& operator=(const Person& person);

	//Перевантаження оператора(<)
	bool operator<(const Person& person) const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Person& person);
};
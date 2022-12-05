#pragma once

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:

	//Ім'я
	string name;

	//Посада
	string position;

public:

	//Конструктор з параметром
	Employee(const string& name,
		const string& position);

	//Гетер для ім'я
	string getName() const;

	//Функція для посади
	string getPosition() const;

	//Функція розрахунку заробітної плати
	virtual int getSalary(const int income, const int numberOfEmployee) const;
};
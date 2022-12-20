#pragma once

#include "Human.h"

class Employee : public Human
{
protected:

	//Заробітна плата
	int salary;

public:

	//Конструктор з параметром
	Employee(const string& surname,
		const int age, const int salary);

	//Гетер для поля класу
	void setSalary(const int salary);

	//Перевизначення віртуальної функції
	virtual void printInfo() const override;
};
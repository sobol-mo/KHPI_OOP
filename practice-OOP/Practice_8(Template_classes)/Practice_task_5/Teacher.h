#pragma once

#include "Employee.h"

class Teacher : public Employee
{
protected:

	//Номер школи
	int schoolNumber;

	//Предмет
	string subject;

public:

	//Конструктор з параметром
	Teacher(const string& surname,
	        const int age, const int salary, 
	        const int schoolNumber,
	        const string& subject);

	//Перевизначення віртуальної функції
	virtual void printInfo() const override;
};
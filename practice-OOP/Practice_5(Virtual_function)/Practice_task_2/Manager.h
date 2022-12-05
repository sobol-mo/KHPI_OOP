#pragma once

#include "Employee.h"

class Manager : public Employee
{
public:

	//Конструктор з параметрами
	Manager(const string& name, const string& position);

	//Перевизначення функції розрахунку заробітної плати
	virtual int getSalary(const int income, const int numberOfEmployee) const override;
};
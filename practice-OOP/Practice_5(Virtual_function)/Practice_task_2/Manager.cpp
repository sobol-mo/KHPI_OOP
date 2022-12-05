#include "Manager.h"

//Конструктор з параметрами
Manager::Manager(const string& name, const string& position):
	Employee(name, position)
{
}

//Перевизначення функції розрахунку заробітної плати
int Manager::getSalary(const int income, const int numberOfEmployee) const
{
	return (income / numberOfEmployee);
}
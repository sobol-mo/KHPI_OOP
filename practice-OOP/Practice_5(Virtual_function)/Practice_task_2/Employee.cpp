#include "Employee.h"

//Конструктор з параметром
Employee::Employee(const string& name, const string& position) {

	this->name = name;
	this->position = position;
}

//Гетер для ім'я
string Employee::getName() const
{
	return this->name;
}

//Гетер для посади
string Employee::getPosition() const
{
	return this->position;
}

//Функція розрахунку заробітної плати
int Employee::getSalary(const int income, const int numberOfEmployee) const
{
	return (income / numberOfEmployee - income / numberOfEmployee * 0.3);
}
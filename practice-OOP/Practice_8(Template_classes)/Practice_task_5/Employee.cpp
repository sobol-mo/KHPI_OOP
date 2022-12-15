#include "Employee.h"

//Конструктор з параметром
Employee::Employee(const string& surname,
	const int age, const int salary) :
	 Human(surname, age)
{
	this->salary = salary;
}

//Гетер для поля класу
void Employee::setSalary(const int salary)
{
	this->salary = salary;
}

//Перевизначення віртуальної функції
void Employee::printInfo() const
{
	Human::printInfo();
	cout << "Заробітня плата: " << salary << endl;
}
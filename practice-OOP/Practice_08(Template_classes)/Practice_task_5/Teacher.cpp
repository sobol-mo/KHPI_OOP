#include "Teacher.h"

//Конструктор з параметром
Teacher::Teacher(const string& surname, const int age,
	const int salary, const int schoolNumber, const string& subject):
	Employee(surname, age, salary)
{
	this->schoolNumber = schoolNumber;
	this->subject = subject;
}

//Перевизначення віртуальної функції
void Teacher::printInfo() const
{
	Employee::printInfo();
	cout << "Номер школи: " << schoolNumber
		<< "\nПредмет: " << subject << endl;
}
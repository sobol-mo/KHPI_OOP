#include "Student.h"

//Створення статичної змінної
int Student::countStudent = 0;

//Конструктор за замовчуванням
Student::Student() : group(125)
{
	this->countStudent++;
	this->name = "Student" + to_string(countStudent);
	this->phoneStud[0].setCode(rand() % 100 + 1);
	this->phoneStud[0].setPhoneNumber(rand() % 100000
		+ 10000);
	this->phoneStud[1].setCode(rand() % 100 + 1);
	this->phoneStud[1].setPhoneNumber(rand() % 100000 
		+ 10000);
}

//Конструктор з параметрами
Student::Student(const string& name, const int group,
	const int numPhoneFirst, const int numPhoneSecond,
	const int codeFirst, const int codeSecond) : 
	group(group)
{
	this->countStudent++;
	this->name = name;
	this->phoneStud[0].setCode(codeFirst);
	this->phoneStud[0].setPhoneNumber(numPhoneFirst);
	this->phoneStud[1].setCode(codeSecond);
	this->phoneStud[1].setPhoneNumber(numPhoneSecond);
}

//Функція друку інформації
void Student::printInfo() const
{
	cout << countStudent << ". " << name << "  Група: "
		<< group << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << "Код: " << phoneStud[i].getCode()
			<< "  Номер телефону: " 
			<< phoneStud[i].getPhoneNumber()
			<< endl;
	}
}
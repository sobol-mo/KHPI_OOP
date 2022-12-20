#include "Human.h"

//Конструктор з параметром
Human::Human(const string& surname, const int age)
{
	this->surname = surname;
	this->age = age;
}

//Віртуальна функція для друку інформації
void Human::printInfo() const
{
	cout << "Прізвище: " << surname
		<< "\nВік: " << age << endl;
}
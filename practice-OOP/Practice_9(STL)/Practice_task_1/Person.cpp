#include "Person.h"

//Конструктор з параметрами за замовчуванням
Person::Person(const string& secondName, const int day, 
               const int month, const int year)
{
	this->secondName = secondName;
	this->birthday = Date(day, month, year);
}

//Конструктор копіювання
Person::Person(const Person& person)
{
	this->secondName = person.secondName;
	this->birthday = person.birthday;
}

//Перевантаження оператора(=)
Person& Person::operator=(const Person& person)
{
	this->secondName = person.secondName;
	this->birthday = person.birthday;

	return *this;
}

//Перевантаження оператора(>)
bool Person::operator<(const Person& person) const
{
	return this->birthday.getYear() < person.birthday.getYear();
}

//Група "гетерів" класу
string Person::getSecondName() const
{
	return this->secondName;
}

Date Person::getBirthday() const
{
	return this->birthday;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Person& person)
{
	return out << person.secondName << "\t" << person.birthday;
}
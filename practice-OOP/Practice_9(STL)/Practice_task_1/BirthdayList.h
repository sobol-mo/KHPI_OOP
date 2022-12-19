#pragma once

#include "Person.h"
#include <set>

//Створення псевдоніма для ітератора
typedef multiset<Person>::iterator multiset_iterator;

class BirthdayList
{
private:

	multiset<Person> birthdayList;

public:

	//Функція додавання людини до списку
	void addPerson(const Person& newPerson);

	//Функція видалення людини зі списку
	bool deleteByBirthday(const Date& birthday);

	//Друк списку
	void printList() const;

	//Функція пошуку людини у списку
	multiset_iterator searchPerson(const string& secondName);
};
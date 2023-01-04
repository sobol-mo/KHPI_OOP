#pragma once

#include "StringTester.h"

class Ticket
{
private:

	//Повне ім'я
	char* fullName;

	//Номер рейсу
	int flightNumber;

public:

	//Конструктор з параметрами
	Ticket(const char* firstName, 
		const char* surname, const int number);

	//Деструктор
	~Ticket();

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, 
		const Ticket& ticket);
};
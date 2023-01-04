#include "Ticket.h"

//Конструктор з параметрами
Ticket::Ticket(const char* firstName, const char* surname, const int number)
{

	//Тести для ім'я та прізвища
	StringTester testString;
	testString(firstName);
	testString(surname);

	//Розмір рядка з повним ім'ям
	int size = strlen(firstName) + strlen(surname) + 2;
	this->fullName = new char[size];

	//Копіювання ім'я
	for (int i = 0; *(firstName + i) != '\0'; i++)
	{
		*(fullName + i) = *(firstName + i);
	}

	fullName[strlen(firstName)] = ' ';

	//Копіювання прізвища
	for (int i = strlen(firstName) + 1; *(surname) != '\0'; i++)
	{
		*(fullName + i) = *(surname++);
	}

	//На кінець рядка ставимо \0
	fullName[size - 1] = '\0';

	this->flightNumber = number;
}

//Деструктор
Ticket::~Ticket()
{
	delete[] this->fullName;
}

//Перевантаження оператора(<<)
ostream& operator<<(ostream& out, const Ticket& ticket)
{
	return out << "Ім'я: " << ticket.fullName
		<< ", номер рейсу: " << ticket.flightNumber;
}
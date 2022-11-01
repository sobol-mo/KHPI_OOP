#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Doctor
{
private:
	//Ім'я пацієнта 
	string namePatient;

public:
	//Конструктор з параметрами
	Doctor(const string& namePatient = "");

	//Перевірка пацієнта
	bool hasPatient() const;

	//Перевантаження операторів
	friend ostream& operator<<(ostream& out, const Doctor& doc);
	friend istream& operator>>(istream& in, Doctor& doc);
	void operator--(int);
};
#pragma once

#include <iostream>
using namespace std;

class Human
{
protected:

	//Фамілія
	string surname;

	//Вік
	int age;

public:
	
	//Конструктор з параметром
	Human(const string& surname,
		  const int age);
		
	//Віртуальна функція для друку інформації
	virtual void printInfo() const;
};
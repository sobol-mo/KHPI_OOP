#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class Number
{
protected:
	int number;

public:
	
	//Конструктор з параметрами
	Number(const int number = 0);

	//Сетер для поля 
	void setNumber(const int number);

	//Гетер для поля 
	int getNumber() const;
};


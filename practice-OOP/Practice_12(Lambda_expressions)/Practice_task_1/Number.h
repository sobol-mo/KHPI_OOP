#pragma once

#include <iostream>
using namespace std;

class Number
{
private:
	
	int value;

public:

	//Конструктор з параметром за замовчуванням
	Number(const int value = 0);

	//Конструктор копіювання
	Number(const Number& number);

	//Гетер поля класу
	int getNumber() const;

	//Сетер поля класу
	void setNumber(const int value);
};
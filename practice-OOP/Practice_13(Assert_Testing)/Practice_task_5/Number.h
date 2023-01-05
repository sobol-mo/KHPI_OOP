#pragma once

#include <iostream>
#include <assert.h>

class Number
{
private:
	
	int value;

public:

	//Конструктор з параметром
	Number(const int value);

	//Конструктор копіювання
	Number(const Number& number);

	//Функції доступу до поля класу
	void setValue(const int value);
	int getValue() const;

	//Перевантаження оператора присвоювання
	Number& operator=(const Number& number);

	//Группа перевантажень арифметичних операторів
	friend Number operator*(const Number& number, const int value);
	friend Number operator+(const Number& number, const int value);
	friend Number operator/(const Number& number, const int value);

	//Функція розрахунку факторіалу числа
	int getFactorial() const;
};
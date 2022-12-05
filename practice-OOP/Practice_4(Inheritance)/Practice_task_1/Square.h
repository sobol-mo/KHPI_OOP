#pragma once

#include "Number.h"

class Square : public Number
{
public:
	
	//Конструктор з параметром
	Square(const int number = 0);

	//Функція підрахунку квадрата числа
	int getSquare() const;
};
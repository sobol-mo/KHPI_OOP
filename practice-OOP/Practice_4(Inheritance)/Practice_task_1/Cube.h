#pragma once

#include "Square.h"

class Cube :public Square
{
public:

	//Конструктор з параметром
	Cube(const int number = 0);

	//Функція підрахунку куба числа
	int getCube() const ;
};


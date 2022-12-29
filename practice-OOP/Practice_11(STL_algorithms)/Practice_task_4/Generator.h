#pragma once

#include "Point.h"

class Generator
{
private:
	
	//Ліва межа
	int leftValue;

	//Права межа
	int rightValue;

public:

	//Конструктор з параметром
	Generator(const int lValue, const int rValue);

	//Перевантаження оператора круглих
	//дужок для генерації точок
	Point operator()();
};
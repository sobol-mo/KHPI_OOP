#include "Generator.h"

//Конструктор з параметром
Generator::Generator(const int lValue, const int rValue)
{
	srand(time(NULL));

	this->leftValue = lValue;
	this->rightValue = rValue;
}

//Перевантаження оператора круглих
//дужок для генерації точок
Point Generator::operator()()
{
	int x = leftValue + (rand() % (rightValue - leftValue));
	int y = leftValue + (rand() % (rightValue - leftValue));

	return Point(x,y);
}
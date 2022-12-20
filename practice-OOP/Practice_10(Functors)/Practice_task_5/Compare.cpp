#include "Compare.h"

//Функтор, який порівнює два числа
bool Compare::operator()(const int fValue, const int sValue) const
{
	return fValue > sValue;
}

//Реалізація функції-предикату
bool myGreater(const int fValue, const int sValue)
{
	return fValue > sValue;
}

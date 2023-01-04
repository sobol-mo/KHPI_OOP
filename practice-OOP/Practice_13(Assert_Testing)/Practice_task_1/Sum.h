#pragma once

#include <assert.h>

#define ERROR_NEGATIVE_NUMB -1

//Клас-функтор
class Sum
{
public:

	//Перевантаження оператора круглих дужок
	int operator()(const int fValue, 
		const int sValue) const;
};

//Функція з групою тестів
void testingSum();
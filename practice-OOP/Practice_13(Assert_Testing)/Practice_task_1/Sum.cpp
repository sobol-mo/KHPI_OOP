#include "Sum.h"

//Перевантаження оператора круглих дужок
int Sum::operator()(const int fValue, const int sValue) const
{

	//Якщо числа невід'ємні
	//повертаємо суму
	if (fValue > 0 && sValue > 0) {
		return fValue + sValue;
	}

	//В іншому випадку помилку
	else {
		return -1;
	}
}

//Функція з групою тестів
void testingSum()
{
	Sum sum;

	assert(sum(10, 10) != ERROR_NEGATIVE_NUMB);
	assert(sum(99, 1) != ERROR_NEGATIVE_NUMB);
	assert(sum(-5, 7) != ERROR_NEGATIVE_NUMB);
	assert(sum(-19, -9) != ERROR_NEGATIVE_NUMB);
}

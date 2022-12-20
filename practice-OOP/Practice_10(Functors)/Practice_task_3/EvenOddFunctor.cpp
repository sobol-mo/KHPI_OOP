#include "EvenOddFunctor.h"

//Конструктор за замовчуванням
EvenOddFunctor::EvenOddFunctor()
{
	this->evenSum = 0;
	this->oddSum = 0;
}

//Функтор, який підраховує суму парних та
//непарних чисел
void EvenOddFunctor::operator()(const int number)
{
	if (number % 2 == 0)
		evenSum += number;
	else
		oddSum += number;
}

//Група "гетерів" класу
double EvenOddFunctor::getEvenSum() const
{
	return this->evenSum;
}

double EvenOddFunctor::getOddSum() const
{
	return this->oddSum;
}
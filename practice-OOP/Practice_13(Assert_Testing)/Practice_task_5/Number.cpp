#include "Number.h"

//Конструктор з параметром
Number::Number(const int value)
{
	this->value = value;
}

//Конструктор копіювання
Number::Number(const Number& number)
{
	this->value = number.value;
}

//Сетер поля класу
void Number::setValue(const int value)
{
	this->value = value;
}

int Number::getValue() const
{
	return this->value;
}

//Перевантаження оператора присвоювання
Number& Number::operator=(const Number& number)
{
	this->value = number.value;

	return *this;
}

//Функція розрахунку факторіалу числа
int Number::getFactorial() const
{
	int result = 1;
	int n = this->value;

	while (n > 1)
	{
		assert(result <= INT_MAX / n);
		result *= n;
		n--;
	}

	return result;
}

//Группа перевантажень арифметичних операторів
Number operator*(const Number& number, const int value)
{
	assert(value != 0 && value != 1);

	return Number(number.value * value);
}

Number operator+(const Number& number, const int value)
{
	return Number(number.value + value);
}

Number operator/(const Number& number, const int value)
{
	assert(value != 0);

	return Number(number.value / value);
}

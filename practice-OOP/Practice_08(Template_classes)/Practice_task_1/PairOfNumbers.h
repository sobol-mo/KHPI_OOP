#pragma once

#include <iostream>
using namespace std;

template<typename Type>
class PairOfNumbers
{
private:

	//Перше число
	Type firstNumber;

	//Друге число
	Type secondNumber;

public:

	//Конструктор з параметрами
	PairOfNumbers(const Type& firstNumber, const Type& secondNumber);

	//Сетери для полів класу
	void setFirstNumber(const Type& number);
	void setSecondNumber(const Type& number);

	//Функція пошуку максимального числа
	Type getMax() const;

	//Функція зміни чисел
	void swapNumbers();

	//Функція друку чисел
	void printNumbers() const;
};
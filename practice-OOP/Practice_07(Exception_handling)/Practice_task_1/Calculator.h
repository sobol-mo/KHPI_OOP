#pragma once

#include "MyException.h"

class Calculator
{
public:

	//Функція суми
	int sum(const int firstNumber,
            const int secondNumber);

	//Функція множення
	int multiplication(const int firstNumber,
		               const int secondNumber);

	//Функція різниці
	int difference(const int firstNumber,
		           const int secondNumber);

	//Функція ділення
	int division(const int firstNumber,
		         const int secondNumber);
};
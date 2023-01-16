#pragma once

#include <iostream>
#include <functional>

using namespace std;

class RandomFunction
{
public:

	//Перевантаження оператора круглих дужок, яке
	//повертає випадкову математичну функцію.
	//std::function<> використовується, для того, щоб
	//вказати компілятору, що повертається функція з 
	//відповідною сигнатурою. Сигнатура функції, що 
	//повертається вказується у трикутних дужках
	function<int(const int, const int)> operator()();

	//Функція, яка перевіряє правильність введеного знаку
	bool symbolCheck(const int fValue, const int sValue, 
		const int result,const char symbol) const;
};

//Функція, яка генерує випадкове число у межах [min, max]
int getRandomNumber(const int min, const int max);
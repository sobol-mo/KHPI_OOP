#include "RandomFunction.h"

//Функція, яка генерує випадкове число у межах [min, max]
int getRandomNumber(const int min, const int max)
{
	return min + rand() % (max - min + 1);
}

//Перевантаження оператора круглих дужок, яке
//повертає випадкову метаматичку функцію.
function<int(const int, const int)> RandomFunction::operator()()
{

	//Генеруємо випадкове число
	switch (getRandomNumber(1,4))
	{
	case 1:

		//Повертаємо лямбда-вираз, функція підсумовування
		return [](const int fValue, const int sValue) 
		{return fValue + sValue; };

		break;
	case 2:

		//Повертаємо лямбда-вираз, функція віднімання
		return [](const int fValue, const int sValue) 
		{return fValue - sValue; };

		break;
	case 3:

		//Повертаємо лямбда-вираз, функція множення
		return [](const int fValue, const int sValue)
		{return fValue * sValue; };

		break;
	case 4:

		//Повертаємо лямбда-вираз, функція ділення
		return [](const int fValue, const int sValue)
		{return fValue / sValue; };

		break;
	default:
		break;
	}
}

//Функція, яка перевіряє правильність математичного виразу
bool RandomFunction::symbolCheck(const int fValue, const int sValue,
                                 const int result, const char symbol) const
{
	if (symbol != '+' && symbol != '-'
		&& symbol != '*' && symbol != '/')
		throw exception("Некоректний знак!");

	//Перевірка правильності виразу
	switch (symbol)
	{
	case '+':
		return (fValue + sValue) == result;
		break;
	case '-':
		return (fValue - sValue) == result;
		break;
	case '*':
		return (fValue * sValue) == result;
		break;
	case '/':
		return (fValue / sValue) == result;
		break;
	default:
		return 0;
		break;
	}
}
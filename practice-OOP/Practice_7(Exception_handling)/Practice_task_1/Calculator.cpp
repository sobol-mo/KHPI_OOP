#include "Calculator.h"

//Функція суми
int Calculator::sum(const int firstNumber, const int secondNumber)
{
    //Обробка виключення
    if (firstNumber < 0 || secondNumber < 0)
        throw MyException("Наявне від'ємне число!");

    return firstNumber + secondNumber;
}

//Фукція множення
int Calculator::multiplication(const int firstNumber, const int secondNumber)
{
    //Обробка виключення
    if (firstNumber == 0 || secondNumber == 0)
        throw MyException("Наявний нуль!");

    return firstNumber * secondNumber;
}

//Функція різниці
int Calculator::difference(const int firstNumber, const int secondNumber)
{
    //Обробка виключення
    if ((firstNumber - secondNumber) < 0)
        throw MyException("Різниця від'ємна!");

    return firstNumber - secondNumber;
}

//Функція ділення
int Calculator::division(const int firstNumber, const int secondNumber)
{
    //Обробка виключення
    if (secondNumber == 0)
        throw MyException("Дільник дорівнює 0!");

    return firstNumber / secondNumber;
}
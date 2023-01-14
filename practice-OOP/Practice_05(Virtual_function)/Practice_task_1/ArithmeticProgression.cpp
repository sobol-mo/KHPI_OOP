#include "ArithmeticProgression.h"

//Функція розрахунку елементу арифметичної прогресії
int ArithmeticProgression::getElement(const int elemNumber)
{
    return firstElement + step * (elemNumber - 1);
}

//Функція розрахунку суми арифметичної прогресії
int ArithmeticProgression::getSum(const int elemNumber)
{
    return (firstElement + getElement(elemNumber)) * elemNumber / 2;
}
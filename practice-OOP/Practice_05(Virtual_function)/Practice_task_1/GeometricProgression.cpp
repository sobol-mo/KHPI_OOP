#include "GeometricProgression.h"

//Функція розрахунку елементу геометричної прогресії
int GeometricProgression::getElement(const int elemNumber)
{
	int tempElement = 1;

	for (int i = 0; i < elemNumber - 1; i++)
	{
		tempElement *= step;
	}

	return firstElement * tempElement;
}

//Функція розрахунку суми геометричної прогресії 
int GeometricProgression::getSum(const int elemNumber)
{
	if (step != 1) {
		return (getElement(elemNumber) * step - firstElement) / (step - 1);
	}
	else {
		return elemNumber * firstElement;
	}
}
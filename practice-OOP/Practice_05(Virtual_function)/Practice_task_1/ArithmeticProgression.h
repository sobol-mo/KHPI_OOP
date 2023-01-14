#pragma once

#include "Progression.h"

class ArithmeticProgression : public Progression
{
public:

	//Функція розрахунку елементу арифметичної прогресії
	virtual int getElement(const int elemNumber) override;

	//Функція розрахунку суми арифметичної прогресії 
	virtual int getSum(const int elemNumber) override;
};
#pragma once

#include "Progression.h"

class GeometricProgression : public Progression
{
public:

	//Функція розрахунку елементку геометричної прогресії
	virtual int getElement(const int elemNumber) override;

	//Функція розрахунку суми геометричної прогресії 
	virtual int getSum(const int elemNumber) override;
};
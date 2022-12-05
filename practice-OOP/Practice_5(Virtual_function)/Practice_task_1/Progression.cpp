#include "Progression.h"

//Конструктор з параметрами
Progression::Progression(const int step, const int firstElement)
{
	this->step = step;
	this->firstElement = firstElement;
}

//Група "гетерів"
int Progression::getFirstElement() const
{
	return this->firstElement;
}

int Progression::getStep() const
{
	return this->step;
}

//Група "сетерів"
void Progression::setFirstElement(const int firstEl)
{
	this->firstElement = firstEl;
}

void Progression::setStep(const int step)
{
	this->step = step;
}
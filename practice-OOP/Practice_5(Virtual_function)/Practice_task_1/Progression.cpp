#include "Progression.h"

Progression::Progression(const int step, const int firstElement)
{
	this->step = step;
	this->firstElement = firstElement;
}

int Progression::getFirstElement() const
{
	return this->firstElement;
}

int Progression::getStep() const
{
	return this->step;
}

void Progression::setFirstElement(const int firstEl)
{
	this->firstElement = firstEl;
}

void Progression::setStep(const int step)
{
	this->step = step;
}
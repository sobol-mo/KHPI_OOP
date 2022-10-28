#include "DivisionSix.h"

//Конструктор за замовчуванням
DivisionSix::DivisionSix():
	sum(0), leftIndex(0), rightIndex(0)
{
}

//Сетер для правої межі
void DivisionSix::setRightIndex(const int index)
{
	this->rightIndex = index;
}

//Метод для підрахунку суми
int DivisionSix::calculateSum()
{
    this->leftIndex = 0;
    this->sum = 0;

    while (leftIndex <= rightIndex)
    {
        if (leftIndex % Number == 0)
        {
            sum += leftIndex;
        }
        leftIndex++;
    }
    return sum;
}
#include "Number.h"

//Конструктор з параметром
Number::Number(int number)
{
    this->number = number;
}

//Сетер для поля класу
void Number::setNumber(const int number)
{
    this->number = number;
}

//Гетер для поля класу
int Number::getNumber() const
{
    return this->number;
}

#include "Number.h"

//Конструктор з параметром за замовчуванням
Number::Number(const int value)
{
    this->value = value;
}

//Конструктор копіювання
Number::Number(const Number& number)
{
    this->value = number.value;
}

//Гетер поля класу
int Number::getNumber() const
{
    return this->value;
}

void Number::setNumber(const int value)
{
    this->value = value;
}

#include "Square.h"

//Конструктор з параметром
Square::Square(const int number) :
    Number(number)
{
}

//Функція підрахунку квадрата числа
int Square::getSquare() const
{
    return number * number;
}

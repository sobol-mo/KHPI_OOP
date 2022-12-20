#include "Cube.h"

//Конструктор з параметром
Cube::Cube(const int number) :
    Square(number)
{
}

//Функція підрахунку куба числа
int Cube::getCube() const
{
    return (getSquare() * number);
}

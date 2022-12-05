#include "Figure.h"

//Конструктор з параметром
Figure::Figure(const double diameter)
{
    this->diameter = (diameter >= 0 ? diameter : 0);
}

//Група функції доступу до полів
void Figure::setDiameter(const double diameter)
{
    this->diameter = (diameter >= 0 ? diameter : 0);
}

double Figure::getDiameter() const
{
    return diameter;
}
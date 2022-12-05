#include "Figure.h"

//����������� � ����������
Figure::Figure(const double diameter)
{
    this->diameter = (diameter >= 0 ? diameter : 0);
}

//����� ������� ������� �� ����
void Figure::setDiameter(const double diameter)
{
    this->diameter = (diameter >= 0 ? diameter : 0);
}

double Figure::getDiameter() const
{
    return diameter;
}
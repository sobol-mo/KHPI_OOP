#include "Figure.h"

//Конструктор з параметрами
Figure::Figure(const int fLong, const int fWidth)
{
    this->figureLong = fLong;
    this->figureWidth = fWidth;
}

//Група "гетерів"
int Figure::getLong() const
{
    return figureLong;
}

int Figure::getWidth() const
{
    return figureWidth;
}

//Група "сетерів"
void Figure::setLong(const int fLong)
{
    this->figureLong = fLong;
}

void Figure::setWidth(const int fWidth)
{
    this->figureWidth = fWidth;
}
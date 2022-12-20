#include "Figure.h"

//Конструктор з параметрами
Figure::Figure(const int fLength, const int fWidth)
{
    this->figureLength = fLength;
    this->figureWidth = fWidth;
}

//Група "гетерів"
int Figure::getLength() const
{
    return figureLength;
}

int Figure::getWidth() const
{
    return figureWidth;
}

//Група "сетерів"
void Figure::setLength(const int fLength)
{
    this->figureLength = fLength;
}

void Figure::setWidth(const int fWidth)
{
    this->figureWidth = fWidth;
}
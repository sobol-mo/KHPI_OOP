#include "MathRectangle.h"

//Конструктор з параметрами за замовчуванням
MathRectangle::MathRectangle(const int width, const int height)
{
	this->width = (width > 0 ? width : 1);
	this->height = (height > 0 ? height : 1);
}

//Гетери для полів класу
int MathRectangle::getWidth() const
{
	return this->width;
}


int MathRectangle::getHeight() const
{
	return this->height;
}

//Функція підрахунку площі
int MathRectangle::getArea() const
{
	return width * height;
}

//Перевантаження оператора(>>)
istream& operator>>(istream& in, MathRectangle& rectangle)
{
	return in >> rectangle.width >> rectangle.height;
}

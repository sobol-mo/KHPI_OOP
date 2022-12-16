#include "Circle.h"

//Явне оголошення шаблонів
template Circle<int>;
template Circle<double>;

//Конструктор з параметрами
template<typename Type>
Circle<Type>::Circle(const Type x, const Type y, const Type radius)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
}

//Перевантаження конструктора з параметрами
template<typename Type>
Circle<Type>::Circle(const Type radius)
{
	this->x = 0;
	this->y = 0;
	this->radius = radius;
}

//Конструктор за замовчуванням
template<typename Type>
Circle<Type>::Circle()
{
	this->x = 0;
	this->y = 0;
	this->radius = 1;
}

//Фунція підрахунку довжини окружності
template<typename Type>
Type Circle<Type>::getCircumference() const
{
	return 2 * PI * this->radius;
}

//Функція підрахунку площі
template<typename Type>
Type Circle<Type>::getArea() const
{
	return PI * radius * radius;
}

//Група "гетерів" для полів класу
template<typename Type>
Type Circle<Type>::getX() const
{
	return this->x;
}

template<typename Type>
Type Circle<Type>::getY() const
{
	return this->y;
}

template<typename Type>
Type Circle<Type>::getRarius() const
{
	return this->radius;
}

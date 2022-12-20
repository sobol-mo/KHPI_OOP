#pragma once

#include "Circle.h"

template<typename Type>
class Sphere : public Circle<Type>
{
protected:

	//Додаткова координата
	Type z;

public:

	//Конструктор з параметрами
	Sphere(const Type x, const Type y, const Type z,
		const Type radius);

	//Перевантаження конструктора з параметрами
	//Використаний параметр за замовчуванням
	Sphere(const Type radius = 1);

	//Функція підрахунку площі поверхну
	Type getSurfaceArea() const;

	//Функція підрахунку об'єму
	Type getVolume() const;

	//Гетер поля класу
	Type getZ() const;
};
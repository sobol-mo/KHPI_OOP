#pragma once

#define PI 3.1415

template <typename Type>
class Circle
{
protected:

	//Координати
	Type x;
	Type y;

	//Радіус
	Type radius;

public:

	//Конструктор з параметрами
	Circle(const Type x, const Type y,
		const Type radius);

	//Перевантаження конструктора з параметрами
	Circle(const Type radius);

	//Конструктор за замовчуванням
	Circle();

	//Фунція підрахунку довжини окружності
	Type getCircumference() const;

	//Функція підрахунку площі
	Type getArea() const;

	//Група "гетерів" для полів класу
	Type getX() const;
	Type getY() const;
	Type getRarius() const;
};
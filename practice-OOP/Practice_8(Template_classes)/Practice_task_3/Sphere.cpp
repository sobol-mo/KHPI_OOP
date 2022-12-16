#include "Sphere.h"

//Явне оголошення шаблонів
template Sphere<int>;
template Sphere<double>;

//Конструктор з параметрами
template<typename Type>
Sphere<Type>::Sphere(const Type x, const Type y, const Type z, const Type radius):
	//Явний виклик конструктору батківського класу
	Circle<Type>::Circle(x, y, radius)
{
	this->z = z;
}

//Перевантаження конструктора з параметрами
template<typename Type>
Sphere<Type>::Sphere(const Type radius)
{
	//При виклику функцій батьківського 
	//шаблонного класу або зверненні до поля
	//обов'язково використовувати this.

	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->radius = radius;
}

//Функція підрахунку площі поверхну
template<typename Type>
inline Type Sphere<Type>::getSurfaceArea() const
{
	return 4 * PI * this->radius * this->radius;
}

//Функція підрахунку об'єму
template<typename Type>
inline Type Sphere<Type>::getVolume() const
{
	return 4 / 3 * PI * this->radius * this->radius;
}

//Гетер поля класу
template<typename Type>
inline Type Sphere<Type>::getZ() const
{
	return this->z;
}
#pragma once

#include "Car.h"

class CarPark
{
private:
	Car* masCars;
	int size;

public:
	//Конструктор з параметрами
	CarPark(Car* masCars, int size);

	//Конструктор копіювання
	CarPark(const CarPark& carPark);

	//Деструктор
	~CarPark();

	//Гетер
	int getSize() const;

	//Функція друку масиву машин
	void print() const;

	//Перевантаження операторів
	CarPark* operator=(const CarPark& carPark);
	CarPark operator+(const Car& car);
	Car& operator[](const int index);
};
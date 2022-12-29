#pragma once

#include "Animal.h"
#include <list>
#include <algorithm>

class Zoo
{
private:

	//Змінна, яка контролює
	//тип додавання і сортування
	bool flag;

	//Список тварин
	list<Animal> animals;

public:

	//Конструктор за замовчуванням
	Zoo();

	//Сетер для поля flag
	void setFlag(const bool flag);

	//Функція додавання тварини
	void addAnimal(const Animal& animal);

	//Функція пошуку тварини
	bool findAnimal(const string& animal) const;

	//Функція сортування списку
	void sortList();

	//Функція друку інформації
	void printInfo() const;
};
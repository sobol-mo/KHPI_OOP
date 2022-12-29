#pragma once

#include <iostream>
using namespace std;

class Animal
{
private:

	//Назва тварини
	string name;

	//Вага
	int weight;

public:

	//Конструктор з параметрами за замовчуванням
	Animal(const string& name = "",
		const int weight = 0);

	//Конструктор копіювання
	Animal(const Animal& animal);

	//Група гетерів класу
	string getName() const;
	int getWeight() const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const Animal& animal);
};
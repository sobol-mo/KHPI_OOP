#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Toy
{
private:

	//Ім'я іграшки
	string name;

	//Ціна іграшки
	int price;

public:

	//Конструктор з параметрами
	Toy(const string& name = "Toy", 
		 const int price = 0);

	//Група "гетерів"
	string getName() const;
	int getPrice() const;

	//Група "сетерів"
	void setName(const string& name);
	void setPrice(const int price);
};
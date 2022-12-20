#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Product
{
private:
	string name;
	float wholesalePrice; //оптова ціна
	float retailPrice; //роздрібна ціна
	static int markup; //націнка

public:
	//Конструктор за замовчуванням
	Product();

	//Група "сетерів"
	void setName(const string& name);
	void setWholesalePrice(const float wholesalePrice);
	void setRetailPrice(const float retailPrice);

	//Група "гетерів"
	string getName() const;
	float getWholesalePrice() const;
	float getRetailPrice() const;

	//Метод для розрахунку роздрібної ціни
	float calcRetailPrice();

	//Метод для зміни націнки
	void markupChange();

};
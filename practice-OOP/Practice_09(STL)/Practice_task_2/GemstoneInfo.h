#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class GemstoneInfo
{
private:

	//Назва дорогоцінного каменю
	string nameOfGem;

	//Місце знаходження
	string location;

public:

	//Конструктор з параметрами за замовчуванням
	GemstoneInfo(const string& nameOfGem = "",
	             const string& location = "");

	//Конструктор копіювання
	GemstoneInfo(const GemstoneInfo& gemstone);

	//Перевантаження оператора(=)
	GemstoneInfo& operator=(const GemstoneInfo& gemstone);

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const GemstoneInfo& gemstone);
};
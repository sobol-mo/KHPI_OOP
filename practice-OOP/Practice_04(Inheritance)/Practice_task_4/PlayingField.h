#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

//Розмір поля
#define SIZE_FIELD 9

class PlayingField {
protected:

	//Ігрове поле
	char field[SIZE_FIELD][SIZE_FIELD];

	//Функція оновлення поля
	void fieldUpdate();

public:

	//Конструктор за замовчуванням
	PlayingField();

	//Друк поля на екран
	void printField() const;

};
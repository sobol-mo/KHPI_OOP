#pragma once

#include "PlayingField.h"

class GameCharacter : public PlayingField {
protected:

	//Х позиція персонажа
	int xPosition;

	//У позиція персонажа
	int yPosition;

public:

	//Конструктор за замовчуванням 
	GameCharacter();

	//Функція оновлення поля з 
	//розташуванням персонажа
	void characterUpdate();

};
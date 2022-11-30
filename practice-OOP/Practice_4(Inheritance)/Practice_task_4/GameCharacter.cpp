#include "GameCharacter.h"

//Конструктор за замовчуванням 
GameCharacter::GameCharacter()
{
	this->xPosition = SIZE_FIELD / 2;
	this->yPosition = SIZE_FIELD / 2;
	field[xPosition][yPosition] = '#';
}

//Функція оновлення поля з 
//розташуванням персонажа
void GameCharacter::characterUpdate()
{
	this->fieldUpdate();
	this->xPosition = rand() % SIZE_FIELD;
	this->yPosition = rand() % SIZE_FIELD;
	field[xPosition][yPosition] = '#';
}
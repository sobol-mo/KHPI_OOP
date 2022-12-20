#pragma once

#include "GameCharacter.h"

class GameEngine : public GameCharacter {
private:

	//Змінна кількість ігрових очок
	int numberOfPoints;

	//Функція друку результату
	void printResult() const;

protected:

	//Функція-валідатор для перевірки виходу
	//персонажа за межі поля, або зіткнення з 0 
	bool validatePosition(const int posX, const int posY) const;

	//Функція зупинки гри
	void stopGame();

public:

	//Конструктор за замовчуванням
	GameEngine();

	//Функції переміщення персонажа 
	void nextStep(const int newX, const int newY);
	void stepUp();
	void stepDown();
	void stepLeft();
	void stepRight();

};
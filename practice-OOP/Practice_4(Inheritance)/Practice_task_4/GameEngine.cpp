#include "GameEngine.h"

//Конструктор за замовчуванням
GameEngine::GameEngine()
{
	this->numberOfPoints = 0;
}

//Функція друку результату
void GameEngine::printResult() const
{
	cout << "Результат: " << numberOfPoints << endl;
}

//Функція-валідатор для перевірки виходу
//персонажа за межі поля, або зіткнення з 0 
bool GameEngine::validatePosition(const int x, const int y) const
{
	return x >= 0 && y >= 0 &&
		x < SIZE_FIELD && y < SIZE_FIELD &&
		field[x][y] != '0';
}

//Функція для зміни розташування персонажа 
void GameEngine::nextStep(const int newX, const int newY)
{
	field[newX][newY] = '#';
	this->xPosition = newX;
	this->yPosition = newY;
	numberOfPoints++;
}

//Функція зупинки гри
void GameEngine::stopGame()
{
	printResult();
	characterUpdate();
	this->numberOfPoints = 0;
}

//Функції для переміщення персонажа
void GameEngine::stepUp()
{
	if (validatePosition(xPosition - 1, yPosition)) {
		field[xPosition][yPosition] = '0';
		nextStep(xPosition - 1, yPosition);
	}
	else {
		stopGame();
	}
}

void GameEngine::stepDown()
{
	if (validatePosition(xPosition + 1, yPosition)) {
		field[xPosition][yPosition] = '0';
		nextStep(xPosition + 1, yPosition);
	}
	else {
		stopGame();
	}
}

void GameEngine::stepLeft()
{
	if (validatePosition(xPosition, yPosition - 1)) {
		field[xPosition][yPosition] = '0';
		nextStep(xPosition, yPosition - 1);
	}
	else {
		stopGame();
	}
}

void GameEngine::stepRight()
{
	if (validatePosition(xPosition, yPosition + 1)) {
		field[xPosition][yPosition] = '0';
		nextStep(xPosition, yPosition + 1);
	}
	else {
		stopGame();
	}
}
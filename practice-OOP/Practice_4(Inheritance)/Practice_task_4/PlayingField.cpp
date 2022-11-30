#include "PlayingField.h"

//Функція оновленя поля
void PlayingField::fieldUpdate()
{
	for (int i = 0; i < SIZE_FIELD; i++)
	{
		for (int j = 0; j < SIZE_FIELD; j++)
		{
			field[i][j] = '*';
		}
	}
}

//Друк поля на екран
void PlayingField::printField() const
{
	for (int i = 0; i < SIZE_FIELD; i++)
	{
		for (int j = 0; j < SIZE_FIELD; j++)
		{
			cout << field[i][j] << " ";
		}
		cout << '\n';
	}
}

//Конструктор за замовчуванням
PlayingField::PlayingField()
{
	this->fieldUpdate();
}
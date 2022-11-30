﻿#include "Room.h"

//Конструктор з параметрами
Room::Room(const int rLong, const int rWidth,
	const int rHeight) :
	Figure(rLong, rWidth), CostSquareMeter(0)
{
	this->height = rHeight;
}

//Функція підрахунку площі 
int Room::getSquare() const
{
	return this->getLong() * this->getWidth();
}

//Функція підрахунку ціни площі
int Room::getCostSquare() const
{
	return this->getCost() * this->getSquare();
}

//Функція підрахунку об'єму кімнати
int Room::getRoomVolume() const
{
	return this->getSquare() * height;
}

//Гетер висоти кімнати
int Room::getHeight() const
{
	return height;
}

//Сетер висоти кімнати
void Room::setHeight(const int height)
{
	this->height = height;
}
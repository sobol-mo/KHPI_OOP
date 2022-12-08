#pragma once

#include "Car.h"
#include <string>
#include <fstream>

class CarParkFile
{
private:

	//Шлях до файлу
	string path;

	//Кількість машин
	int numberOfcars;

public:

	//Конструктор з параметром
	CarParkFile(const string& path);

	//Функція запису автопарку у файл
	void writingToFile(const Car* carPark, const int numberOfcars);

	//Функція додавання машини до файлу
	void addCarToFile(const Car& car);

	//Друк автопарку
	void printCarPark() const;

	//Очищення файлу
	void clearFile();
};
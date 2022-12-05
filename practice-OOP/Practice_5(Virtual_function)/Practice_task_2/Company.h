#pragma once

#include "Manager.h"

class Company
{
private:

	//Прибуток компанії
	int income;

	//Масив команди робітників
	Employee** team;

	//Розмір команди
	int teamSize;

public:

	//Конструктор з параметрами
	Company(Employee** team, const int teamSize, const int income);

	//Функція друку інформації про команду
	void printInfo() const;
};
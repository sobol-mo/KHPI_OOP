#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include "Bus.h"
using namespace std;

class BusStation
{
private:

	//Назва станції
	string name;

	//Автобуси, що їдуть
	vector<Bus> departedBuses;

	//Автобуси, що приїжджають
	vector<Bus> arrivingBuses;

public:

	//Конструктор з параметром
	BusStation(const string& name);

	//Функція додавання автобуса
	void addBus(const Bus& bus);
	
	//Функція сортування списків автобусів
	void sortList();
	
	//Функція порівняння автобусів, що їдуть з однієї станції
	//з автобусами, що приїжджають на іншу станцію
	bool equalDepartedArriving(BusStation& station);

	//Функція пошуку схожих номерів автобусів, що їдуть/приїжджають
	vector<int> getDepartedArrivingBuses(const BusStation& station);

	//Функція друку інформації
	void printInformation() const;
};
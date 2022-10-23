#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Route
{
private:
	string startRoute;
	string finishRoute;

	//Метод оновлення масиву шляхів 
	void updatingRoute();

public:
	//Статичні змінні
	static string* listRoute;
	static int counterRoute;

	//Конструктор за замовчуванням
	Route();

	//Конструктор з параметрами
	Route(const string& startR, const string& finishR);

	//Група "гетерів"
	string getStartRoute() const;
	string getFinishroute() const;

	//Група "сетер"
	void setStartRoute(const string& sRoute);
	void setFinishRoute(const string& fRoute);
};

//Функція друку всього шляху
void printAllRoutes();

//Функція друку шляху
void printRoute(const int routeNumb);
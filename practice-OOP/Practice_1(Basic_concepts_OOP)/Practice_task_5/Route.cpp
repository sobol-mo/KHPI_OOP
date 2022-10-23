#include "Route.h"

//Метод оновлення масиву шляхів 
void Route::updatingRoute()
{
	*(listRoute + counterRoute) = 
		startRoute + " - " + finishRoute;
	counterRoute++;
}

//Конструктор за замовчуванням
Route::Route()
{
	this->startRoute = "Start";
	this->finishRoute = "Finish";
	updatingRoute();
}

//Конструктор з параметрами
Route::Route(const string& startR, const string& finishR)
{
	this->startRoute = startR;
	this->finishRoute = finishR;
	updatingRoute();
}

//Група "гетерів"
string Route::getStartRoute() const
{
	return startRoute;
}

string Route::getFinishroute() const
{
	return finishRoute;
}

//Група "сетерів"
void Route::setStartRoute(const string& sRoute)
{
	this->startRoute = sRoute;
}

void Route::setFinishRoute(const string& fRoute)
{
	this->finishRoute = fRoute;
}

//Функція друку всього шляху
void printAllRoutes()
{
	for (int i = 0; i < Route::counterRoute; i++)
	{
		cout << *(Route::listRoute + i) << endl;
	}
}

//Функція друку шляху
void printRoute(const int routeNumb)
{
	if (routeNumb > Route::counterRoute - 1)
	{
		cout << "Incorrect index!" << endl;
		return;
	}

	cout << *(Route::listRoute + routeNumb) << endl;
}
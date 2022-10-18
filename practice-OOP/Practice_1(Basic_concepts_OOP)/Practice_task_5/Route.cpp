#include "Route.h"

//Метод оновлення масиву шляхів 
void Route::updatingRoute()
{
	*(m_listRoute + m_counterRoute) = m_startRoute + " - " + m_finishRoute;
	m_counterRoute++;
}

//Конструктор за замовчуванням
Route::Route()
{
	m_startRoute = "Start";
	m_finishRoute = "Finish";
	updatingRoute();
}

//Конструктор з параметрами
Route::Route(const string& startR, const string& finishR)
{
	m_startRoute = startR;
	m_finishRoute = finishR;
	updatingRoute();
}

//Група "гетерів"
string Route::getStartRoute() const
{
	return m_startRoute;
}

string Route::getFinishroute() const
{
	return m_finishRoute;
}

//Група "сетерів"
void Route::setStartRoute(const string& sRoute)
{
	m_startRoute = sRoute;
}

void Route::setFinishRoute(const string& fRoute)
{
	m_finishRoute = fRoute;
}

//Функція друку всього шляху
void printAllRoutes()
{
	for (int i = 0; i < Route::m_counterRoute; i++)
	{
		cout << *(Route::m_listRoute + i) << endl;
	}
}

//Функція друку шляху
void printRoute(const int routeNumb)
{
	if (routeNumb > Route::m_counterRoute - 1)
	{
		cout << "Incorrect index!" << endl;
		return;
	}

	cout << *(Route::m_listRoute + routeNumb) << endl;
}
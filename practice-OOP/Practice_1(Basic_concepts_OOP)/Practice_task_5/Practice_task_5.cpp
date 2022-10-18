/*

	Створити клас Route, який описує маршрути між горами.
	Поля:
	- Початок/кінець маршруту
	- Статичний лічильник маршрутів
	- Статичний масив маршрутів
	Методи класу:
	- Конструктори
	- Функції доступу до полів set()/get()
	- Оновлення списку маршрутів updatingRoute()
	Функції(не класу):
	- Друк одного маршруту
	- Друк всього списку маршрутів

*/

#include "Route.h"
#define SIZE 10

string* Route::m_listRoute = new string[SIZE];
int Route::m_counterRoute = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int indexList = 0;
	Route firstRoute("Kyiv", "Kharkiv");
	Route secondRoute("Sumy", "Melitopol");
	Route thirdRoute("Zaporozhye", "Lyubotin");

	cout << " --- Друк всіх маршрутів --- " << endl;
	printAllRoutes();

	cout << "\nВведіть індекс для друку маршруту: ";
	cin >> indexList;
	cout << " --- Друк маршруту --- " << endl;
	printRoute(indexList);
}
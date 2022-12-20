/*

	Створити клас Route, який описує маршрути між горами.
	Поля:
	- початок/кінець маршруту;
	- статичний лічильник маршрутів;
	- статичний масив маршрутів.
	Методи класу:
	- конструктори;
	- функції доступу до полів set()/get();
	- оновлення списку маршрутів updatingRoute().
	Функції(не класу):
	- друк одного маршруту;
	- друк всього списку маршрутів.

*/

#include "Route.h"
#define SIZE 10

string* Route::listRoute = new string[SIZE];
int Route::counterRoute = 0;

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
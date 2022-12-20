/*

	Створити клас-функтор EvenOddFunctor,
	який підраховує суму парних та непраних
	чисел. Поля класу:
	- сума парних чисел(int);
	- сума непарних чисел(int);
	Методами класу є група "гетерів" для для полів
	класу. Перевантажити оператор круглих дужок
	для підрахунку суми парних та непарних чисел.

	Для демонстрації програми створити vector(int)
	та заповнити його. За допомогою циклу підрахувати
	суму парних та непарих чисел та роздрукувати.

*/

#include <Windows.h>
#include <iostream>
#include <vector>
#include "EvenOddFunctor.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	EvenOddFunctor functor;

	//Вектор з типом int
	vector<int> vectorInt = { 12, 31, 55, 78,
	                          14, 99, 37, 0};

	//Підрахунок суми парних та
	//непарних чисел у векторі
	for (const auto& elem : vectorInt)
		functor(elem);
	
	cout << "Сума парних чисел vector<int>: " 
		<< functor.getEvenSum() << endl;
	cout << "Сума непарних чисел vector<int>: " 
		<< functor.getOddSum() << endl;
}
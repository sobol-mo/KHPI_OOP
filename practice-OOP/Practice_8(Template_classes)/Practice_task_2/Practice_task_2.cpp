/*

    Створити клас Exception, за допомогою 
	якого будуть оброблятися винятки.
	Параметром класу є повідомлення про 
	виключення. Методом класу є гетер для поля
	класу.

	Створити шаблонний клас Array. Поля класу:
	- покажчик на масив;
	- розмір масиву.
	Методи класу Array:
	- конструктор з параметром(розмір масиву);
	- деструктор;
	- гетер для розміру масиву;
	- функція push, яка додає новий елемент у 
	кінець масиву;
	- перевантаження оператору квадратних дужок.

	Реалізовувати методи шаблонного класу Array
	у файлі cpp. Явно оголосити два шаблони
	з типами даних:
	- int;
	- float.

*/

#include <Windows.h>
#include "Array.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

	const int arraySize = 5;

	try
	{

		//Створення об'єкту шаблонного класу з типом int
		Array<int> arrayInt(arraySize);

		cout << " --- Масив типу int ---\n";
		for (int i = 0; i < arrayInt.getSize(); i++)
		{
			cout << arrayInt[i] << " ";
		}

		//Створення об'єкту шаблонного класу з типом float
		Array<float> arrayFloat(arraySize);

		cout << "\n\n--- Масив типу float ---\n";
		for (int i = 0; i < arrayFloat.getSize(); i++)
		{
			cout << arrayFloat[i] << " ";
		}

		//Додавання нового елементу у кінець arrayFloat
		arrayFloat.push(99.99);

		cout << "\n\n--- Змінений масив типу float ---\n";
		for (int i = 0; i < arrayFloat.getSize(); i++)
		{
			cout << arrayFloat[i] << " ";
		}
	}
	catch (const Exception& exception)
	{
		cout << exception.what() << endl;
	}
}
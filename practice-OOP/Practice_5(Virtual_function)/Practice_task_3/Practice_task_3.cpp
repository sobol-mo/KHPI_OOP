/*

	Створити клас Fruit від якого успадковуються два
	класи Apple, Banana. Поля класу Fruit:
	- сорт фрукту;
	- ціна.
	Методи класу Fruit:
	- конструктор з параметром;
	- функції доступу до поля ціни;
	- чиста віртуальна функція друку інформації;
	- перевантаження оператора потокового виводу,
	в якій використовується функція друку інформації.
	В класах Apple та Banana перевизначити віртуальні функції.
	Створити масив із шести фруктів в якому знаходяться три банани
	і три яблука.

*/

#include <Windows.h>
#include "Apple.h"
#include "Banana.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Banana firstBanana("Зелений",67);
	Banana secondBanana("Нендрум", 93);
	Banana thirdBanana("Медовий", 78);
	Apple firstApple("Голден", 86);
	Apple secondApple("Гала", 74);
	Apple thirdApple("Еврика", 89);

	const int size = 6;
	Fruit* masFruit[size];

	*(masFruit + 0) = &firstBanana;
	*(masFruit + 1) = &secondBanana;
	*(masFruit + 2) = &thirdBanana;
	*(masFruit + 3) = &firstApple;
	*(masFruit + 4) = &secondApple;
	*(masFruit + 5) = &thirdApple;
	
	cout << " --- Інформація про фрукти --- " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << **(masFruit + i) << endl;
	}
}
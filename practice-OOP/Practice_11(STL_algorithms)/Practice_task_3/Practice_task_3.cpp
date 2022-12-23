/*

	Створити клас Bus з полями:
	- номер автобуса;
	- флаг місцезнаходження, де
	1 - скоро прибуде на зупинку,
	0 - виїхав із зупинки.
	Методи класу:
	- конструктор з параметрами за замовчуванням;
	- конструктор копіювання;
	- група "гетерів" класу.
	Перевантаження:
	- оператора(<), який порівнює номери;
	- оператор(==), який порівнює номери;
	- оператор(=).

	Створити класу BusStation, поля класу:
	- назва станції;
	- два вектори з типом Bus, один вектор зберігає
	інформацію про автобуси, що їдуть зі станції,
	другий про автобуси що приїджають на станцію.
	Методи класу:
	- конструктор з параметром(назва станції);
	- функція додавання автобуса;
	- функція сортування списків автобусів;
	- функція порівняння автобусів, що їдуть з 
	однієї станції, з автобусами, що приїжджають 
	на іншу станцію(функція equal);
	- функція пошуку схожих номерів автобусів,
	що їдуть з першої станції, приїжджають на 
	другу станцію;
	- функція друку інформації.

*/

#include <Windows.h>
#include "BusStation.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	BusStation firstStation("Зупинка А");
	BusStation secondStation("Зупинка Б");

	try
	{

		//Додавання автобусів до першої зупинки
		firstStation.addBus(Bus(89, 1));
		firstStation.addBus(Bus(80, 1));
		firstStation.addBus(Bus(41, 0));
		firstStation.addBus(Bus(51, 0));

		//Додавання автобусів до другої зупинки
		secondStation.addBus(Bus(99, 0));
		secondStation.addBus(Bus(41, 1));
		secondStation.addBus(Bus(11, 1));

		cout << "--- Друк інформації про зупинки ---\n";
		firstStation.printInformation();
		cout << endl;
		secondStation.printInformation();

		//Сортування списків
		firstStation.sortList();
		secondStation.sortList();

		if (firstStation.equalDepartedArriving(secondStation)) {

			cout << "\nНомери автобусів збігаються" << endl;
		}
		else {

			cout << "\nНомери автобусів не збігаються" << endl;
		}

		cout << "\n--- Друк оновленої інформації про зупинки ---\n";
		firstStation.printInformation();
		cout << endl;
		secondStation.printInformation();
		
		vector<int> busNumbers = firstStation.
			getDepartedArrivingBuses(secondStation);

		cout << "\nПерелік номерів, які збіглися: ";
		for (const auto& elem : busNumbers)
			cout << elem << " ";

		cout << endl;
	}
	catch (const exception& exception)
	{
		cout << exception.what() << endl;
	}
}
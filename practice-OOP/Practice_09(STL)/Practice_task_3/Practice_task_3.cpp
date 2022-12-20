/*

	Створити клас FileInfo. Полями класу є:
	- шлях до файлу;
	- рік створення файлу;
	- кількість звернень до файлу.
	Методи класу:
	- конструктор з параметрами за замовчуванням;
	- конструктор копіювання;
	- група "гетерів";
	- перевантаження оператора(<<);
	- перевантаження оператора(>>);
	- перевантаження оператора(=).

	Створити клас FileManager, який реалізовує
	зручний інтерфейс для роботи з файлами.
	Полем класу є контейнер list з типом FileInfo.
	Методи класу:
	- функція створення каталогу з файлу;
	- додавання нового файлу до каталогу;
	- запис каталогу до файлу;
	- функція друку каталогу;
	- функція видалення файлів, дата створення
	яких менша за задану;
	- статична функція-предикат, яка порівнює
	рік створення файлів;
	- функція сортування каталогу за 
	роком створення файлів;
	- функція пошуку файлу з найбільшою кількістю
	звернень, повертає ітератор на елемент.

	Для демонстрації програми передбачити 
	зручний інтерфейс.

*/

#include <Windows.h>
#include "FileManager.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FileManager fileManager;
	catalog_it iterator;

	int auxiliaryFirstNumber = 0;
	int auxiliarySecondNumber = 0;
	string auxiliaryStr;

	while (true)
	{
		cout << "\n1. Заповнення з файлу" << endl;
		cout << "2. Додати файл" << endl;
		cout << "3. Записати каталог у файл" << endl;
		cout << "4. Надрукувати каталог" << endl;
		cout << "5. Видалити файли, дата створення яких менша за задану" << endl;
		cout << "6. Cортувати каталог за датою створення" << endl;
		cout << "7. Надрукувати файл з найбільшою кількістю зверненнь" << endl;
		cout << " -> "; cin >> auxiliaryFirstNumber;

		try
		{
			switch (auxiliaryFirstNumber)
			{
			case 1:
				cout << "Введіть шлях до файлу: ";
				cin >> auxiliaryStr;

				fileManager.creationFromFile(auxiliaryStr);
				break;
			case 2:
				cout << "Введіть(шлях, рік створення, кількість звернень): ";
				cin >> auxiliaryStr 
					>> auxiliaryFirstNumber
					>> auxiliarySecondNumber;

				fileManager.addFile(FileInfo(auxiliaryStr, 
					auxiliaryFirstNumber,auxiliarySecondNumber));
				break;
			case 3:
				cout << "Введіть шлях до файлу: ";
				cin >> auxiliaryStr;

				fileManager.catalogToFile(auxiliaryStr);
				break;
			case 4:
				fileManager.printCatalog();
				break;
			case 5:
				cout << "Введіть рік: ";
				cin >> auxiliaryFirstNumber;

				fileManager.removeElements(auxiliaryFirstNumber);
				break;
			case 6:
				fileManager.sortCatalog();
				cout << "Каталог відсортовано" << endl;
				break;
			case 7:
				iterator = fileManager.getMaxRequestsNumbFile();

				cout << *iterator << endl;
				break;
			default:
				exit(0);
				break;
			}
		}
		catch (const exception& exception)
		{
			cout << exception.what() << endl;
		}
	}
}
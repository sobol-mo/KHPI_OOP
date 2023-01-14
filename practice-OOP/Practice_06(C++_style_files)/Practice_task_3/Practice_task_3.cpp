/*

	Створити клас Student. Поля класу Student:
	- прізвище студента;
	- оцінка з ООП;
	- оцінка з математики;
	- оцінка з філософії.
	Методи класу Student:
	- конструктор з параметрами за замовчуванням;
	- група "гетерів";
	- перевантаження оператора потокового виводу;
	- перевантаження оператора потокового введення;
	- перевантаження оператора присвоєння.

	Створити клас StudentRating. Полями класу 
	StudentRating є:
	- рейтинг студентів(масив типу Student);
	- кількість студентів;
	- шлях до файлу.
	Методи класу StudentRating:
	- конструктор з параметром(шлях до файлу);
	- функція оновлення файлу;
	- функція додавання студента до рейтингу;
	- функція видалення студента з рейтингу;
	- функція друку рейтингу;
	- функція зчитування інформації з файлу.

	Масив студентів статичний, складається з 15 елементів.
	Після кожної операції з масивом студентів автоматично
	оновлювати дані у файлі. Функція оновлення файлу має bool
	параметр, якщо 0 оновлюємо файл повністю, якщо 1 додаємо
	останнього студента у файл. Створити зручний інтерфейс для
	демонстрації програми.

*/

#include <Windows.h>
#include "StudentRating.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Шлях до файлу з рейтингом
	string path = "fileRating.txt";

	//Допоміжні змінні
	string tempString = "";
	Student student;
	int itemMenu = 0;
	bool deleteFlag = 0;

	//Рейтинг студентів
	StudentRating rating(path);
	
	while (true)
	{
		cout << "1. Додати студента" << endl;
		cout << "2. Видалити студента" << endl;
		cout << "3. Сортувати рейтинг (критерій: оцінка з ООП)" << endl;
		cout << "4. Роздрукувати рейтинг" << endl;
		cout << "5. Зчитати з файлу" << endl;
		cout << " -> "; cin >> itemMenu;

		switch (itemMenu)
		{
		case 1:
			cout << "Введіть (прізвище, оцінку з ООП/математики/філософії): ";
			cin >> student;
			rating.addStudent(student);
			break;
		case 2:
			cout << "Введіть прізвище: ";
			cin >> tempString;
			deleteFlag = rating.deleteStudent(tempString);
			if (deleteFlag) {
				cout << "Студента видалено з рейтингу!" << endl;
			}
			else {
				cout << "Студента не знайдено!" << endl;
			}
			break;
		case 3:
			rating.sortRating();
			cout << "Рейтинг відсортовано!" << endl;
			break;
		case 4:
			rating.printRating();
			break;
		case 5:
			cout << "Введіть ім'я файлу: ";
			cin >> tempString;
			rating.readFile(tempString);
			break;
		default:
			break;
		}
	}
}
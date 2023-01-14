/*

    Створити клас Exception, за допомогою якого
	відбувається обробка винятків. Полем класу є
	повідомлення про виняток. Методи класу:
	- конструктор з параметром(за замовчуванням);
	- функція what, яка повертає повідомлення.

	Створити клас FileException, який генерує 
	повідомлення про символ, що шукається у файлі.
	Клас FileException є спадкоємцем класу Exception.
	Повідомлення має вигляд: "шлях до файлу: рядок, номер символу".
	Методи класу FileException:
	- конструктор з параметрами;
	- група "гетерів".

	Створити клас FileChecker, який шукає символ у файлі.
	Полем класу є символ, що шукається. Методи класу:
	- конструктор з параметром(символ, що шукається);
	- функції доступу до поля класу;
	- функція пошуку символа у файлі.

*/

#include <Windows.h>
#include "FileChecker.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Шлях до файлів
	string firstPath = "textFile.txt";
	string secondPath = "secondFile.txt";

	//Об'єкт класу
	FileChecker fileChecker('*');

	//У блоці try, перераховуємо всі файли для перевірки
	try
	{
		fileChecker.checkFile(firstPath);
		fileChecker.checkFile(secondPath);
	}
	catch (const FileException& fileExc) {
		cout << fileExc.what() << endl;

		cout << " --- Подробиці ---\n";
		cout << "Символ: " << fileChecker.getCheckSymbol() <<
			"\nЗнайдений у файлі з шляхом: " << fileExc.getPath() <<
			"\nРядок під номером: " << fileExc.getLineNumber() <<
			"\nНомер елементу: " << fileExc.getIndex() << endl;
	}
	catch (const Exception& exception)
	{
		cout << exception.what() << endl;
	}
}
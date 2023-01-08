/*

    Створити клас-функтор StringFilter,
	який шукає символи, які зустрічаються
	лише раз у тексті. Знайдені символи 
	записати у файл в зворотньому порядку.

*/

#include <Windows.h>
#include "StringFilter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    StringFilter filter;
    string text = "fffgdff213123hp";
    const string path = "resultText.txt";

	try
	{
		filter(path, text);
	}
	catch (const exception& exception)
	{
		cout << exception.what() << endl;
	}
}
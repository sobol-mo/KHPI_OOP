/*

	Створити клас-функтор TextTransformer, який
	у кожному слові файлу шукає задану літеру і
	виділяє її лапками. Параметрами перевантаженого
	оператора круглих дужок є:
	- шлях до файлу з початковим текстом;
	- шлях до файлу зі зміненим текстом.
	У класі наявне поле символ пошуку. Передбачити
	сетер для поля класу.

*/

#include <Windows.h>
#include "TextTransformer.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    TextTransformer transformer('а');

	//Шлях до файлу з початковим текстом
	string inputPath = "inputText.txt";

	//Шлях до файлу зі зміненим текстом
	string outputPath = "outputText.txt";

	try
	{
		transformer(inputPath, outputPath);
	}
	catch (const exception& exception)
	{
		cout << exception.what() << endl;
	}
}
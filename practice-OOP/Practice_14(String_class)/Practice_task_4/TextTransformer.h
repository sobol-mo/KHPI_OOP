#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class TextTransformer
{
private:

	//Символ пошуку
	char searchSymbol;

	//Функція для зміни слова
	void transformWord(string& word) const;

public:

	//Конструктор з параметром
	TextTransformer(const char searchSymbol);

	//Сетер поля класу
	void setSymbol(const char searchSymbol);

	//Перевантаження оператора круглих дужок
	void operator()(const string& inputFilePath,
		const string& outputFilePath) const;
};
#include "StringFilter.h"

void StringFilter::operator()(const string& path, const string& text) const
{
	//Відкриття файлу на запис
	ofstream fout(path);
	if (!fout.is_open())
		throw exception("Помилка відкриття файлу");

	//Прапор символу, що зустрічається
	//0 - зустрівся більше одного разу
	//1 - зустрівся один раз
	bool flag;
	
	//Допоміжний рядок
	string tempStr;

	for (int i = 0; i < text.size(); i++)
	{
		//Гіпотеза, що символ зустрівся лише раз
		flag = 1;

		for (int j = 0; (j < text.size()) && flag; j++)
		{
			//Якщо символ збігся повертаємо 0, виходимо з циклу
			flag = !(text[i] == text[j] && i != j);
		}

		//Якщо прапор = 1, дозаписуємо символ у допоміжний рядок
		if (flag)
			tempStr += text[i];
	}

	//Записуємо рядок у зворотному порядку
	for (int i = tempStr.size() - 1; i >= 0; i--)
	{
		fout << tempStr[i];
	}

	fout.close();
}
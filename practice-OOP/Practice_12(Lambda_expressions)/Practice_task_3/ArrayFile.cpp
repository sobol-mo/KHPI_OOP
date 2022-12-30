#include "ArrayFile.h"

int ArrayFile::operator()(const string& path) const
{

	//Допоміжний вектор
	vector<int> tempVector;

	ifstream fin(path);

	if (!fin.is_open())
		throw exception("Файл не відкрився!");

	int number = 0;
	while (fin >> number)
	{
		tempVector.push_back(number);
	}

	fin.close();

	if (tempVector.size() == 0)
		throw exception("Вектор порожній!");

	//Повертаємо випадкове значення вектора
	return tempVector[rand() % tempVector.size()];
}

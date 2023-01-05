#include "ArrayFile.h"

//Функція тестування вектора
void testingVector(const vector<int> vectorInt) {

	int sum = 0;

	assert(vectorInt.size() != 0);
	
	for (int i = 0; i < vectorInt.size(); i++)
	{
		assert(vectorInt[i] >= 0);
		sum += vectorInt[i];
	}

	assert(sum < 1000);
}

//Конструктор з параметром
ArrayFile::ArrayFile(const string& path)
{
	this->path = path;
}

//Сетер для поля 
void ArrayFile::setPath(const string& path)
{
	this->path = path;
}

//Функція зчитування масиву з файлу
vector<int> ArrayFile::getArray() const
{
	vector<int> vectorInt;

	ifstream fin(path);

	//Перевірка на коректність
	//відкриття файлу
	assert(fin);

	int tempNumber = 0;
	while (fin >> tempNumber)
	{
		vectorInt.push_back(tempNumber);
	}

	fin.close();
	return vectorInt;
}

//Функція заміни масива в файлі
void ArrayFile::setArray(const vector<int> vectorInt) const
{
	ofstream fout(path);

	//Перевірка на коректність
	//відкриття файлу
	assert(fout);

	for (int index = 0; index < vectorInt.size(); index++)
	{
		fout << vectorInt[index] << " ";
	}

	fout.close();
}
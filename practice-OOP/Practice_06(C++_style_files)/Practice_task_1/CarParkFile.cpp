#include "CarParkFile.h"

//Конструктор з параметром
CarParkFile::CarParkFile(const string& path)
{
	this->path = path;
	this->numberOfcars = 0;
}

//Функція запису автопарку у файл
void CarParkFile::writingToFile(const Car* carPark, const int numberOfcars)
{
	ofstream fout(path);
	this->numberOfcars = numberOfcars;

	if (!fout.is_open())
		return;

	//Записуємо в файл дані про автопарк
	for (int i = 0; i < numberOfcars; i++)
	{
		fout << carPark[i] << endl;
	}

	fout.close();
}

void CarParkFile::addCarToFile(const Car& car)
{
	
	//Відкриваємо файл txt на дозапис
	ofstream fout(path, ios::app);
	this->numberOfcars++;

	if (!fout.is_open())
		return;

	fout << car << endl;

	fout.close();
}

void CarParkFile::printCarPark() const
{
	ifstream fin(path);

	if (!fin.is_open())
		return;

	string buffer;
	for (int i = 0; i < numberOfcars; i++)
	{
		getline(fin, buffer);
		cout << buffer << endl;
	}

	fin.close();
}

void CarParkFile::clearFile()
{

	//Відкриваємо файл на перезапис 
	ofstream fout(path,ios::trunc);
	this->numberOfcars = 0;

	if (!fout.is_open())
		return;

	fout.close();
}
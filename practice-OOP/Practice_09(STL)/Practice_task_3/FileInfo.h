#pragma once

#include <iostream>
using namespace std;

class FileInfo
{
private:

	//Шлях до файлу
	string path;

	//Рік створення файлу
	int creationYear;

	//Кількість звернень до файлу
	int requestsNumber;

public:

	//Конструктор з параметрами за замовчуванням
	FileInfo(const string& path = "",
	         const int creationYear = 0,
		     const int requestsNumber = 0);

	//Конструктор копіювання
	FileInfo(const FileInfo& file);

	//Група "гетерів" класу
	string getPath() const;
	int getCreationYear() const;
	int getRequestsNumber() const;

	//Перевантаження оператора(<<)
	friend ostream& operator<<(ostream& out, const FileInfo& file);

	//Перевантаження оператора(>>)
	friend istream& operator>>(istream& in, FileInfo& file);

	//Перевантаження оператора(=)
	FileInfo& operator=(const FileInfo& file);
};
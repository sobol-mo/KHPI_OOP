#pragma once

#include <list>
#include <fstream>
#include "FileInfo.h"

//Псевдонім для ітератора
typedef list<FileInfo>::iterator catalog_it;

class FileManager
{
private:

	//Контейнер list для зберігання
	//інформації про файли
	list<FileInfo> fileCatalog;

public:

	//Функція створення каталогу з файлу
	void creationFromFile(const string& path);

	//Додавання нового файлу до каталогу
	void addFile(const FileInfo& newFile);

	//Запис каталогу до файлу
	void catalogToFile(const string& path);

	//Функція друку каталогу
	void printCatalog() const;

	//Функція видалення файлів, дата створення
	//яких менша за задану
	void removeElements(const int year);

	//Сортування каталогу
	void sortCatalog();

	//Статична функція-предикат
	//Потрібна для сортування каталогу
	static bool predicate(const FileInfo& firstFile,
		const FileInfo& secondFile);

	//Функція пошуку файлу з найбільшою
	//кількістю звернень, повертає ітератор
	catalog_it getMaxRequestsNumbFile();
};
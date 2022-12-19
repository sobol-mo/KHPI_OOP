#include "FileManager.h"

//Функція створення каталогу з файлу
void FileManager::creationFromFile(const string& path)
{
	ifstream fin(path);

	if (!fin.is_open())
		throw exception("Помилка відкриття файлу!");

	if (!fileCatalog.empty())
		fileCatalog.clear();

	//Тимчасова змінна
	FileInfo tempFile;

	//Зчитування інформації з файлу
	while (!fin.eof())
	{
		fin >> tempFile;
		fileCatalog.push_back(tempFile);
	}

	fin.close();
}

//Додавання нового файлу до каталогу
void FileManager::addFile(const FileInfo& newFile)
{
	fileCatalog.push_back(newFile);
}

//Запис каталогу до файлу
void FileManager::catalogToFile(const string& path)
{
	ofstream fout(path);

	if (!fout.is_open())
		throw exception("Помилка відкриття файлу!");

	if (fileCatalog.empty())
		throw exception("Каталог порожній!");

	//Розмір каталогу
	int size = fileCatalog.size();

	//Лічильник
	int counter = 0;

	//Записуємо інформацію у файл
	for (auto pList = fileCatalog.begin(); pList != fileCatalog.end(); pList++, counter++)
	{
		fout << *pList;

		//Якщо останній елемент каталогу
		//не робимо отступ у файлі
		if (counter != size - 1)
			fout << endl;
	}

	fout.close();
}


//Функція друку каталогу
void FileManager::printCatalog() const
{
	if (fileCatalog.empty())
		throw exception("Каталог порожній!");

	for (auto pList = fileCatalog.begin(); pList != fileCatalog.end(); pList++)
	{
		cout << "Шлях: " << pList->getPath()
			<< " | Рік створення: " << pList->getCreationYear()
			<< " | Кількість звернень: " << pList->getRequestsNumber()
			<< endl;
	}
}

//Функція видалення файлів, дата створення
//яких менша за задану
void FileManager::removeElements(const int year)
{
	if (fileCatalog.empty())
		throw exception("Каталог порожній!");


	for (auto pList = fileCatalog.begin(); pList != fileCatalog.end();)
	{

		//Якщо рік збігся видаляємл елемент і
		//оновлюємо ітератор
		if(pList->getCreationYear() < year){ 
		
			pList = fileCatalog.erase(pList);
		}
		else {
			pList++;
		}
	}
}

//Статична функція-предикат
//Потрібна для сортування каталогу
bool FileManager::predicate(const FileInfo& firstFile, const FileInfo& secondFile)
{
	return firstFile.getCreationYear() > secondFile.getCreationYear();
}

//Сортування каталогу
void FileManager::sortCatalog()
{
	if (fileCatalog.empty())
		throw exception("Каталог порожній!");

	fileCatalog.sort(FileManager::predicate);
}

//Функція пошуку файлу з найбільшою
//кількістю звернень, повертає ітератор
catalog_it FileManager::getMaxRequestsNumbFile()
{
	if (fileCatalog.empty())
		throw exception("Каталог порожній!");

	//Покажчик на елемент, що повертається
	catalog_it returnedFile = fileCatalog.begin();

	for (auto pList = fileCatalog.begin(); pList != fileCatalog.end(); pList++)
	{

		//Якщо умова повертає true переставляємо покажчик 
		if (pList->getRequestsNumber() > returnedFile->getRequestsNumber()) {
			returnedFile = pList;
		}
	}

	return returnedFile;
}
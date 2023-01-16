#include "ArrayInt.h"

//Конструктор за замовчуванням
ArrayInt::ArrayInt()
{
	this->arraySize = 10;
	this->array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		*(array + i) = rand() % 50 + 1;
	}
}

//Конструктор з параметрами
ArrayInt::ArrayInt(int* array, int arraySize)
{
	this->arraySize = arraySize;
	this->array = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		*(this->array + i) = *(array + i);
	}
}

//Деструктор
ArrayInt::~ArrayInt()
{
	delete[] this->array;
}

//Гетер для розміру масиву
int ArrayInt::getSize() const
{
	return this->arraySize;
}

//Функція запису масиву у файл
void ArrayInt::arrayToBinFile(const string& path) const
{

	//Відкриваємо файл з розширенням bin
	ofstream fout(path, ios::binary | ios::out);

	if (!fout.is_open())
		return;

	fout.write((char*)array, sizeof(int) * arraySize);

	fout.close();
}

//Функція зчитування масиву з файлу
void ArrayInt::readArrayFromBinFile(const string& path)
{
	this->arraySize = 0;

	//Допоміжний масив
	int tempMas[1001]{};

	//Відкриваємо файл з розширенням bin
	ifstream fin(path, ios::binary | ios::in);

	if (!fin.is_open())
		return;

	//Зчитуємо числа з бінарного файлу поки не досягли кінця
	while (fin.read((char*)&tempMas[arraySize], sizeof(int)))
	{
		arraySize++;
	}

	//Якщо файл порожній, вихід з функції
	if (arraySize == 0) {
		fin.close();
		return;
	}

	//Створення нового масиву
	delete[] this->array;
	this->array = new int[arraySize];

	//Копіюємо дані з допоміжного масиву до основного
	for (int i = 0; i < arraySize; i++)
	{
		*(this->array + i) = *(tempMas + i);
	}

	fin.close();
}

//Функція зміни масиву у файлі
void ArrayInt::changingArrayInFile(const string& path) const
{

	//Відкриваємо файл з розширенням bin
	fstream fileStream(path, ios::binary | ios::in | ios::out);

	//Допоміжні змінні
	int tempNumber = 0;
	int index = 0;
	int numberSubstitution = -99;

	//Зчитуємо число з бінарного файлу поки не досягли кінця
	while (fileStream.read((char*)&tempNumber, sizeof(int)))
	{
		//Якщо число парне, перезаписуємо його
		if (tempNumber % 2 == 0) {
			fileStream.seekp(index * sizeof(int), ios::beg);
			fileStream.write((char*)&numberSubstitution, sizeof(int));
		}

		//Ставимо покажчик на наступний елемент
		fileStream.seekg(++index * sizeof(int), ios::beg);
	}

	fileStream.close();
}

//Перевантаження оператора([])
int& ArrayInt::operator[](const int index) const
{
	if (index >= arraySize && index < 0)
		return *(this->array + 0);
	else
		return *(this->array + index);
}
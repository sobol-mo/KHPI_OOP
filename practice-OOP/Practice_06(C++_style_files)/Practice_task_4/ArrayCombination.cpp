#include "ArrayCombination.h"

//Конструктор з параметрами
ArrayCombination::ArrayCombination(const string& firstPath, const string& secondPath)
{
    this->firstPath = firstPath;
    this->secondPath = secondPath;
    this->resultArray = NULL;
}

//Деструктор
ArrayCombination::~ArrayCombination()
{
    if (!resultArray)
        delete[] resultArray;
}

//Функція для розрахунку розміру масиву у файлі
int ArrayCombination::getSizeArrayFromFile(const string& path) const
{
    ifstream fin(path);

    if (!fin.is_open())
        return 0;

    int tempNumber = 0;
    int sizeOfArray = 0;

    while (fin >> tempNumber)
    {
        sizeOfArray++;
    }

    fin.close();
    return sizeOfArray;
}

//Функція для комбінації двох масивів
void ArrayCombination::combination()
{

    int firstSize = getSizeArrayFromFile(firstPath);
    int secondSize = getSizeArrayFromFile(secondPath);

    if (!resultArray)
        delete[] resultArray;

    this->sizeOfArray = firstSize + secondSize;

    this->resultArray = new int[sizeOfArray] {};
    ifstream firstFin(firstPath);
    ifstream secondFin(secondPath);

    if (!firstFin.is_open() || !secondFin.is_open())
        return;

    for (int i = 0; i < sizeOfArray;)
    {
        if (!firstFin.eof()) {
            firstFin >> resultArray[i];
            i++;
        }
        if (!secondFin.eof()) {
            secondFin >> resultArray[i];
            i++;
        }
    }

    firstFin.close();
    secondFin.close();
}

//Функція друку масиву
void ArrayCombination::printArray() const
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << this->resultArray[i] << " ";
    }
    cout << endl;
}
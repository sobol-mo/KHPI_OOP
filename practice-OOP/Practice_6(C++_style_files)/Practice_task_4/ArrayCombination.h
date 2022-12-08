#pragma once

#include <iostream>
#include <fstream>
using namespace std;

class ArrayCombination
{
private:

    //Результуючий масив
    int* resultArray;

    //Розмір масиву
    int sizeOfArray;

    //Шлях до файлів з масивом
    string firstPath;
    string secondPath;

public:

    //Конструктор з параметрами
    ArrayCombination(const string& firstPath,
        const string& secondPath);

    //Деструктор
    ~ArrayCombination();

    //Функція для розрахунку розміру масиву у файлі
    int getSizeArrayFromFile(const string& path) const;

    //Функція для комбінації двох масивів
    void combination();

    //Функція друку масиву
    void printArray() const;
};
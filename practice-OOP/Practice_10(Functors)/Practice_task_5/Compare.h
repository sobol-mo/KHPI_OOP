#pragma once

#include <iostream>
#include <map>

using namespace std;

//Клас-функтор для порівняння
//двох чисел
class Compare
{
public:
	bool operator()(const int fValue, const int sValue) const;
};

//Функція-предикат, яка порівнює два числа
bool myGreater(const int fValue, const int sValue);
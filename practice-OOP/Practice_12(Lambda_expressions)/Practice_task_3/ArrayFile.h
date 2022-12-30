#pragma once

#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//Клас-функтор для роботи з файлом
class ArrayFile
{
public:
	
	//Перевантажений оператора круглих дужок ,який
	//повертає випадкове число з масиву
	int operator()(const string& path)const;
};
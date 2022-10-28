#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class MyString
{
private:
	char* string;
	int length;

public:
	//Конструктор з параметром
	MyString(const char* initString);

	//Деструктор
	~MyString();

	//Група "гетерів"
	char* getString() const;
	int getLength() const;

	//Метод друку рядку
	void copy(const char* str);
};
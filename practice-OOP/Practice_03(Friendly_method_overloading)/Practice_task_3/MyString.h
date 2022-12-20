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

	//Конструктор за замовчуванням
	MyString();

	//Конструктор з параметром
	MyString(const char* initString);
	
	//Конструктор копіювання
	MyString(const MyString& myStr);

	//Деструктор
	~MyString();

	//Група "гетерів"
	char* getString() const;
	int getLength() const;

	//Метод друку рядку
	void copy(const char* str);

	//Перевантаження оператора(=)
	MyString& operator=(const MyString& myStr);

	//Перевантаження операторів через дружні функції
	friend istream& operator>>(istream& in, MyString& myStr);
	friend ostream& operator<<(ostream& out, const MyString& myStr);
	friend MyString operator+(const MyString& myStrFirst,
		const MyString& myStrSecond);
};
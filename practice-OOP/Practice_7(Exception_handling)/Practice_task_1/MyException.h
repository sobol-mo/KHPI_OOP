#pragma once

#include <iostream>

using namespace std;


class MyException
{
private:

	//Повідомлення про помилку
	string errorMessage;

public:

	//Конструктор з параметрами
	MyException(const string& errorMessage);

	//Функція, яка повертає повідомлення
	string what() const;
};
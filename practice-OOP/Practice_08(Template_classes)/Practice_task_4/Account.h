#pragma once

#include <iostream>
using namespace std;

class Account
{
private:

	//Пошта
	string mail;

	//Пароль
	string password;

public:

	//Конструктор з параметром
	Account(const string& mail,
	        const string& password);

	//Функція зміни паролю
	void setPassword(const string& newPassword);

	//Функція друку інформації
	void printInformation() const;
};
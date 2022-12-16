#include "Account.h"

//Конструктор з параметром
Account::Account(const string& mail, const string& password)
{
	this->mail = mail;
	this->password = password;
}

//Функція зміни паролю
void Account::setPassword(const string& newPassword)
{
	this->password = newPassword;
}

//Функція друку інформації
void Account::printInformation() const
{
	cout << "Пошта: " << mail
		<< "\nПароль: " << password << endl;
}
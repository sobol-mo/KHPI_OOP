#pragma once

#include <iostream>
#include <string>
#include <map>
using namespace std;

class Notes
{
private:

	//Пароль
	string password;

	//Прапор входу до облікового запису
	//1 - користувач увійшов у систему
	//0 - користувач не увійшов
	bool enterFlag;

	//нотатки
	map<int, string> notes;

public:

	//Конструктор з параметрами
	Notes(const string& password);

	//Функція входу до облікового запису
	void login(const string& password);

	//Функція виходу з облікового запису
	void exit();

	//Функція зміни паролю
	void setPassword(const string& newPassword);

	//Функція додавання нотатки
	void addNote(const string& note);

	//Функція заміни тексту в нотатці, аргументи:
	// - номер нотатки
	// - новий текст
	// - початкова позиція для заміни
	// - кількість змінюваних символів
	void changeNote(const int index, const string& text,
		const int deletePos, const int count);

	//Друк нотаток
	void printNotes() const;
};
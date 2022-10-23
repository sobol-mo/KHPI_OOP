#pragma once

#include "Phone.h"

class Student
{
private:
	string name;
	Phone phoneStud[2];
	const int group;
	static int countStudent;

public:
	//Конструктор за замовчуванням
	Student();

	//Конструктор з параметрами
	Student(const string& name, const int group,
		const int numPhoneFirst, const int numPhoneSecond,
		const int codeFirst, const int codeSecond);

	//Метод друку інформації
	void printInfo() const;
};
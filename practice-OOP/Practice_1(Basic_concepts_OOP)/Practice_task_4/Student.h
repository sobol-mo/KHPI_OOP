#pragma once

#include "Phone.h"

class Student
{
private:
	string m_name;
	Phone m_phoneStud[2];
	const int m_group;
	static int m_countStudent;

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
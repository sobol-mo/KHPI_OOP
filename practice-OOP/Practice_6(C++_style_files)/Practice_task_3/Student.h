#pragma once

#include <iostream>

using namespace std;

class Student
{
private:

	//Прізвище студента
	string secondName;

	//Оцінки
	int gradeOOP;
	int gradeMath;
	int gradePhilosophy;

public:

	//Конструктор з параметрами
	Student(const string& secondName = "", const int gradeOOP = 0,
			const int gradeMath = 0, const int gradePhilosophy = 0);

	//Група "гетерів"
	string getSecondName() const;
	int getGradeOOP() const;
	int getGradeMath() const;
	int getGradePhilosophy() const;

	//Перевантаження операторів
	friend ostream& operator<<(ostream& out, const Student& student);
	friend istream& operator>>(istream& in, Student& student);
	Student& operator=(const Student& student);

};
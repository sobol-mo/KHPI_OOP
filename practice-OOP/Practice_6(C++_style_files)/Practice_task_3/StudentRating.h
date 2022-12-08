#pragma once

#include "Student.h"
#include <fstream>

//Розмір рейтингово списку
#define SIZE 15

class StudentRating
{
private:

	//Рейтинг студентів
	Student studentRating[SIZE];

	//Кількість студентів
	int numbeOfStudents;

	//Шлях до файлу 
	string path;

	//Функція оновлення файлу з рейтингом
	void fileUpdate(const bool typeUpdate);

public:

	//Конструктор з параметром
	StudentRating(const string& path);

	//Функція додавання студента до рейтингу
	void addStudent(const Student& student);

	//Функція сортування рейтингу 
	void sortRating();

	//Функція видалення студента з рейтингу
	bool deleteStudent(const string& secondName);

	//Функція друку рейтингу
	void printRating() const;

	//Функція зчитування інформації з файлу
	void readFile(const string& path);
};
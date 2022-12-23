#pragma 

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

class Schoolboy
{
private:

	//Ім'я
	string name;

	//Оцінки
	vector<int> grades;

public:

	//Конструктор з параметрами
	Schoolboy(const string& name);

	//Перевантаження конструктора з параметрами
	Schoolboy(const string& name,
	         const vector<int>& grades);

	//Функція додавання оцінки
	void addGrade(const int grade);

	//Функція підрахунку оцінок нижче заданої
	int gradesCountLessGiven(const int grade) const;

	//Функція підрахунку середньо арифметичного
	double averageGrade() const;

	//Функція заміни всіх шуканих оцінок на задану
	void replaceGrades(const int searchGrade, const int replaceable);

	//Функція друку інформації
	void printInformation() const;
	
	//Функція сортування оцінок
	void sortGrades();
};
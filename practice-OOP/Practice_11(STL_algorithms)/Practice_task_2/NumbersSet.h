#pragma once

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

//Псевдонім для типу даних pair<iter, iter>
typedef pair<list<int>::const_iterator,
	list<int>::const_iterator> mismatch_pair;

class NumbersSet
{
private:

	//Ім'я множини
	string name;

	//Множина чисел
	list<int> numbersSet;

public:

	//Конструктор з параметром
	NumbersSet(const string& name);
	
	//Функція додавання числа
	void addNumber(const int number);

	//Функція зміни всіх чисел на їх квадрати
	void changeToSquareNumber();

	//Функція об'єднання множин
	void mergeSet(NumbersSet& set);

	//Функція видалення повторюваних чисел
	void removeRepetitions();
	
	//Функція знаходження перетину множин
	list<int> getIntersection(const NumbersSet& set) const;

	//Функція знаходження першої пари чисел, що розрізняється
	mismatch_pair firstMismatch(const NumbersSet& set) const;

	//Функція друку множини
	void print() const;
};

//Функція розрахунку квадрата числа
int square(const int number);
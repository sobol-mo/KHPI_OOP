#pragma once

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class WordCounter
{
private:

	//Функція порівняння поточного слова з шуканим
	bool equal(const string& curWord, const string& word) const;

public:

	//Функція підрахунку кількості слів
	int getCount(const string& path, const string& word) const;
};
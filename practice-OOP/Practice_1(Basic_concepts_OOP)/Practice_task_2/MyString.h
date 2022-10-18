#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class MyString
{
private:
	char* m_string;
	int m_length;

public:
	MyString(const char* initString);
	~MyString();

	char* getString() const;
	int getLength() const;
	void copy(const char* str);
};
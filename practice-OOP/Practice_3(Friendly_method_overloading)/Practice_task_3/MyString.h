#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class MyString
{
private:
	char* string;
	int length;

public:

	//����������� �� �������������
	MyString();

	//����������� � ����������
	MyString(const char* initString);
	
	//����������� ���������
	MyString(const MyString& myStr);

	//����������
	~MyString();

	//����� "������"
	char* getString() const;
	int getLength() const;

	//����� ����� �����
	void copy(const char* str);

	//�������������� ���������(=)
	MyString& operator=(const MyString& myStr);

	//�������������� ��������� ����� ����� �������
	friend istream& operator>>(istream& in, MyString& myStr);
	friend ostream& operator<<(ostream& out, const MyString& myStr);
	friend MyString operator+(const MyString& myStrFirst,
		const MyString& myStrSecond);
};
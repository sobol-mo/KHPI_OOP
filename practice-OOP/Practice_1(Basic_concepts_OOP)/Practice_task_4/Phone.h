#pragma once

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Phone
{
private:
	int m_code;
	int m_phoneNumber;

public:
	//Конструктор за замовчуванням
	Phone();
	//Конструктор з параметрами
	Phone(const int code, const int phoneNumber);

	//Група "сетерів"
	void setCode(const int code);
	void setPhoneNumber(const int phoneNum);

	//Група "гетерів"
	int getCode() const;
	int getPhoneNumber() const;
};
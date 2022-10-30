#pragma once

#include <iostream>
#include <Windows.h>

using namespace std;

class BankAccount
{
private:
	int balance;
	int depositInterest;

public:
	//Конструктор з параметрами
	BankAccount(int balance = 0,
		int depositInterest = 0);

	//Конструктор копіювання
	BankAccount(const BankAccount& bankAcc);

	//Група "гетерів"
    int getBalance() const;
	int getDepositInterest() const;

	//Група "сетерів"
	void setBalance(const int balance);
	void setDepositInterest(const int deposInterest);

	//Функція розрахунку доходу від вкладу
	int annualIncome() const;

	//Перевантаження операторів
	BankAccount* operator=(const BankAccount& bankAcc);
	BankAccount operator+(const BankAccount& bankAcc);
	void operator()(const int balance,
				const int depositInterest);
};
#include "BankAccount.h"

//Конструктор з параметрами
BankAccount::BankAccount(int balance , 
	int depositInterest )
{
	this->balance = balance;
	this->depositInterest = depositInterest;
}

//Конструктор копіювання
BankAccount::BankAccount(const BankAccount& bankAcc)
{
	this->balance = bankAcc.balance;
	this->depositInterest = bankAcc.depositInterest;
}

//Група "гетерів"
int BankAccount::getBalance() const
{
	return this->balance;
}

int BankAccount::getDepositInterest() const
{
	return this->depositInterest;
}

//Група "сетерів"
void BankAccount::setBalance(const int balance)
{
	this->balance = balance;
}

void BankAccount::setDepositInterest(const int deposInterest)
{
	this->depositInterest = deposInterest;
}


//Функція розрахунку доходу від вкладу
int BankAccount::annualIncome() const
{
	return (balance * depositInterest / 100);
}

//Перевантаження оператора(=)
BankAccount* BankAccount::operator=(const BankAccount& bankAcc)
{

	this->balance = bankAcc.balance;
	this->depositInterest = bankAcc.depositInterest;

	return this;
}

//Перевантаження оператора(+)
BankAccount BankAccount::operator+(const BankAccount& bankAcc)
{
	BankAccount tempAcc;
	tempAcc.balance = this->balance + bankAcc.balance;
	tempAcc.depositInterest = this->depositInterest +
		bankAcc.depositInterest;

	return tempAcc;
}

//Перевантаження оператора("()")
void BankAccount::operator()(const int  balance, const int depositInterest)
{
	if (balance * depositInterest / 100 >
		this->balance * this->depositInterest / 100) {

		this->balance = balance;
		this->depositInterest = depositInterest;
		cout << "Дані змінено!";
	}
	else {
		cout << "Дані не змінено!";
	}
}
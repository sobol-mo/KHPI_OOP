/*

    Реалізувати клас BankAccount. 
    Поля класу:
    - баланс;
    - депозитний відсоток;
    Методи класу: 
    - конструктор;
    - функція доступу до полів;
    - розрахунок річного доходу від вкладу;
    Перевантаження:
    - оператор присвоєння;
    - оператор суми, який складає баланс та відсоток;
    - оператор(), який порівнює річний дохід введених
    даних та наявих, якщо введені дані  мають більший
    дохід перезаписуємо дані.

*/


#include "BankAccount.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    BankAccount bankAccFirst(400,4);
    BankAccount bankAccSecond(500, 10);

    cout << "Інформація про перший акаунт\n";
    cout << "Баланс: " << 
        bankAccFirst.getBalance() << endl;
    cout << "Депозитний відсоток: " <<
        bankAccFirst.getDepositInterest() << endl;
    cout << "Річний прибуток: " <<
        bankAccFirst.annualIncome() << endl;

    cout << "\nІнформація про другий акаунт\n";
    cout << "Баланс: " <<
        bankAccSecond.getBalance() << endl;
    cout << "Депозитний відсоток: " <<
        bankAccSecond.getDepositInterest() << endl;
    cout << "Річний прибуток: " <<
        bankAccSecond.annualIncome() << endl;

    BankAccount bankAccThird;
    bankAccThird = bankAccFirst + bankAccSecond;

    cout << "\nІнформація про третій акаунт\n";
    cout << "Баланс: " <<
        bankAccThird.getBalance() << endl;
    cout << "Депозитний відсоток: " <<
        bankAccThird.getDepositInterest() << endl;
    cout << "Річний прибуток: " <<
        bankAccThird.annualIncome() << endl;

    cout << "\n--- Перевірка прибутку ---\n";
    bankAccThird(1200, 12);

    cout << "\n\nІнформація про третій акаунт\n";
    cout << "Баланс: " <<
        bankAccThird.getBalance() << endl;
    cout << "Депозитний відсоток: " <<
        bankAccThird.getDepositInterest() << endl;
    cout << "Річний прибуток: " <<
        bankAccThird.annualIncome() << endl;
}


/*

    Створити класи Dollars та Cents.
    Загальні методи:
    - функції доступу до полів;
    - функція друку.
    Поля Dollars:
    - кількість доларів.
    Поля Cents:
    - кількість центів.
    Перевантаження Dollars:
    - оператор додавання, скласти долари з доларами,
    також долари з центами(округлення у менший бік);
    - оператор присвоєння;
    - оператор порівняння доларів.
    Перевантаження Cents:
    - оператор додавання, скласти центи з центами,
    та центи з доларами;
    - оператор(), який приймає 0/1, якщо 0 - відбувається
    округлення поля класу у менший бік, 1 - у більший
    бік.

*/


#include "Dollars.h"
#include "Cents.h";

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Dollars dollarsFirst(5);
    Dollars dollarsSecond(11);
    
    Cents centsFirst(157);
    Cents centsSecond(253);

    cout << " --- Друк зміних ---\n";
    cout << "Перша кількість доларів: " <<
        dollarsFirst.getDollars() << endl;
    cout << "Друга кількість доларів: " <<
        dollarsSecond.getDollars() << endl;
    cout << "Перша кількість центів: " <<
        centsFirst.getCents() << endl;
    cout << "Друга кількість центів: " <<
        centsSecond.getCents() << endl;

    cout << " --- Додавання: долари + центи ---\n";
    dollarsFirst = dollarsFirst + centsSecond;
    cout << "Кількість доларів : " <<
        dollarsFirst.getDollars() << endl;

    cout << " --- Додавання: центи + долари ---\n";
    centsFirst = centsFirst + dollarsSecond;
    cout << "Кількість центів : " <<
        centsFirst.getCents() << endl;

    cout << " --- Округлення центів ---\n";
    centsFirst(0);
    cout << "Кількість центів : " <<
        centsFirst.getCents() << endl;

    if (dollarsFirst == dollarsSecond) {
        cout << "Кількість доларів однакова\n";
    }
    else {
        cout << "Кількість доларів різна\n";
    }
}
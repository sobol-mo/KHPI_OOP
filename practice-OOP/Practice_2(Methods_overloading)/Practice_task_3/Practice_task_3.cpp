﻿/*

    Створити класс Date, з полями:
    - День (int)
    - Тиждень (int)
    - Рік (int)
    Методи:
    - Конструктори
    - Функції доступу до полів
    - Функція друку дати
    Перевантаження:
    - Віднімання дат
    - Порівняння дат
    - Оператор присвоєння
    - Оператор() для зміни дати

*/

#include "Date.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Date dateFirst(32, 14, 2022);
    Date dateSecond(20, 10, 2020);
    Date dateThird;

    cout << " --- Друк всіх об'єктів --- " << endl;
    cout << "Перша дата: ";
    dateFirst.printDate();
    cout << "Друга дата: ";
    dateSecond.printDate();
    cout << "Третя дата: ";
    dateThird.printDate();

    cout << "\n--- Перевантаження операторів ---\n";
    
    dateThird = dateFirst - dateSecond;
    cout << "Operator (-) та (=): ";
    dateThird.printDate();

    cout << "\n--- Умовні оператори ---\n";
    if (dateFirst != dateSecond) {
        cout << "Operator(!=): Перша та друга дати різні!";
    }
    if (dateFirst > dateSecond) {
        cout << "\n\nOperator(!=):" <<
            "Перша дата більша за другу!";
    }
    if (dateThird <= dateSecond) {
        cout << "\n\nOperator(<=):" <<
            "Третя дата менша, або дорівнює другій!\n";
    }

    cout << " --- Operator() ---\n";
    dateThird(-1, -1, 2023);
    cout << "Дата: ";
    dateThird.printDate();
}
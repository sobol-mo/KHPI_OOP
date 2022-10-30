/*

    Створити клас Square.
    Поля:
    - сторона квадрата.
    Методи:
    - конструктори;
    - функції доступу до змінної.
    Перевантаження (як методи):
    - оператор додавання;
    - оператор віднімання;
    - оператор множення;
    - оператор присвоєння.

*/

#include "Square.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Square firstSquare;
    Square secondSquare(7);
    Square thirdSquare(3);

    cout << " --- Функції доступу ---\n";
    cout << "Сторона другого квадрату: " <<
        secondSquare.getSide() << endl;

    secondSquare.setSide(10);

    cout << " --- Перевантаження ---\n";
    firstSquare = secondSquare + thirdSquare;
    cout << "Оператор(+): " <<
        firstSquare.getSide() << endl;

    firstSquare = firstSquare - secondSquare;
    cout << "Оператор(-): " <<
        firstSquare.getSide() << endl;

    firstSquare = thirdSquare * secondSquare;
    cout << "Оператор(*): " <<
        firstSquare.getSide() << endl;
}


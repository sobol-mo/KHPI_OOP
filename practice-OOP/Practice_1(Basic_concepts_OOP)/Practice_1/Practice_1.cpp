/*

    Створити клас Point,
    поля класу: x, y - координати.
    Методи класу:
    - Конструктор за замовчанням
    - Конструктор з параметрами
    - Конструктор копіювання
    - Функції доступу до полів: get()/set()
    - Функція копіювання об'єкту

*/

#include "Point.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << " --- Конструктор за замовчанням ---\n";
    Point pointFirst;
    pointFirst.show();

    cout << "\n--- Використання сетерів ---\n";
    pointFirst.setX(3);
    pointFirst.setY(6);
    pointFirst.show();

    cout << "\n--- Конструктор з параметрами ---\n";
    Point pointSecond(9, 35);
    cout << " X =" << setw(3) << pointSecond.getX()
        << "  Y =" << setw(3) << pointSecond.getY() << endl;

    cout << "\n--- Конструктор з параметром" << 
        "(один параметр заданий) ---\n";
    Point pointThird(7);
    pointThird.show();

    cout << "\n--- Конструктор копіювання ---\n";
    Point pointFourth(pointThird);
    pointFourth.show();

    cout << "\n--- Функція копіювання ---\n";
    pointFourth.copy(pointFirst);
    pointFourth.show();
}
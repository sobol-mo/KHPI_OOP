/*

    Створити клас Point. Полями є координати точки.
    Методи класу:
    - конструктор з параметрами за замовчуванням;
    - конструктор копіювання.
    Перевантаження:
    - оператор(<<);
    - оператор(<), який порівнює суму координат.

    Створити клас-функтор Generator, який генерує
    точку з випадковими координатами. Полями класу є:
    - ліва межа;
    - права межа.
    Перевантажити оператор круглих дужок для генерації
    випадкової точки.

    Для демонстрації програми створити vector з типом
    Point на 5 елементів. За допомогою функції generate 
    і класу Generator заповнити вектор, та роздрукувати.
    Відсортувати вектор за допомогою sort. Знайти елементи
    з максимальною/мінімальною сумою координат.

*/

#include <Windows.h>
#include <vector>
#include <algorithm>
#include "Point.h"
#include "Generator.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Оголошення вектора з типом Point на 5 елементів
    vector<Point> points(5);

    //Заповнюємо вектор за допомогою класу Generator
    generate(points.begin(), points.end(), Generator(1, 10));

    cout << " --- Друк масиву точок ---\n";
    for (const auto& elem : points)
        cout << elem << endl;

    //Сортування вектору
    sort(points.begin(), points.end());

    cout << "\n--- Друк відсортованого масиву ---\n";
    for (const auto& elem : points)
        cout << elem << endl;

    auto iterator = max_element(points.begin(), points.end());
    cout << "\nТочка з максимальною сумою х,у: " << *iterator << endl;

    iterator = min_element(points.begin(), points.end());
    cout << "Точка з мінімальною сумою х,у: " << *iterator << endl;
}
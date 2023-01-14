/*

    Створити клас MathRectangle, з полями:
    - ширина;
    - висота.
    Методи класу:
    - конструктор з параметрами за замовчуванням;
    - гетери полів класу;
    - функція підрахунку площі.
    Перевантажити оператор(>>) для ініціалізації полів.

    Створити vector з типом int, який містить різні площі.
    За допомогою функції find_if з лямбда-виразом перевірити
    наявність площі у векторі. Створити лямбда-вираз, 
    який друкує інформацію об'єкту класу MathRectangle 
    і рахує кількість викликів.

*/

#include <Windows.h>
#include <vector>
#include <algorithm>
#include "MathRectangle.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Вектор, який містить площі
    vector<int> areas = {100, 121, 10, 20, 60};
    
    MathRectangle rectangle;

    cout << "Введіть (довжину, висоту): ";
    cin >> rectangle;

    //Змінна містить функцію find_if з лямбда-виразом
    auto searchArea = find_if(areas.begin(), areas.end(),

        //Лямбда-захоплення містить всі раніше оголошені 
        //змінні, які передаються за допомогою посилання
        [&](const int area) {
            return area == rectangle.getArea();
        });

    //Змінна містить лямбда-вираз, який друкує 
    //інформацію про прямокутник
    auto print = [](const MathRectangle& rectangle) {

        //Статична змінна, яка рахує кількість викликів
        static int counter{ 0 };

        cout << counter++ << ". Довжина = " << rectangle.getWidth()
            << ", висота = " << rectangle.getHeight()
            << ", площа = " << rectangle.getArea() << endl;
    };

    //Перший виклик print
    print(rectangle);

    cout << "\nВведіть (довжину, висоту): ";
    cin >> rectangle;

    //Другий виклик print
    print(rectangle);

    if (searchArea != areas.end()) {
        cout << "\nПлощу знайдено!" << endl;
    }
    else {
        cout << "\nПлощу не знайдено!" << endl;
    }
}
/*

    Створити шаблоний клас Circle.
    Полями класу Circle є:
    - координата х;
    - координата у;
    - радіус.
    Методи класу: 
    - конструктор з параметрами(координати х, у та радіус);
    - перевантаження конструктора з параметрами(радіус);
    - конструктор за замовчуванням;
    - функція пірдрахунку довжини окружності;
    - функція підрахунку площі;
    - група "гетерів" для полів класу.

    Створити шаблоний клас Sphere, який успадковується від
    шаблоного класу Circle. Полем класу є додаткова координата.
    Методи класу Sphere:
    - конструктор з параметрами;
    - перевантаження конструктора з параметрами(радіус);
    - функція підрахунку площі поверхні;
    - функція підрахунку об'єму;
    - гетер для поля класу.

*/

#include <Windows.h>
#include <iostream>
#include "Sphere.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Circle<int> circle(10);

    cout << " --- Інформація про коло(int) ---\n";
    cout << "Координата х: " << circle.getX() << endl;
    cout << "Координата y: " << circle.getY() << endl;
    cout << "Радіус: " << circle.getRarius() << endl;
    cout << "Довжина окружності: " << circle.getCircumference() << endl;
    cout << "Площа: " << circle.getArea() << endl;

    Sphere<double> sphere(3.5, 4.2, -1, 5.8);

    cout << "\n--- Інформація про сферу(double) ---\n";
    cout << "Координата х: " << sphere.getX() << endl;
    cout << "Координата y: " << sphere.getY() << endl;
    cout << "Координата z: " << sphere.getZ() << endl;
    cout << "Радіус: " << sphere.getRarius() << endl;
    cout << "Площа поверхні: " << sphere.getSurfaceArea() << endl;
    cout << "Об'єм: " << sphere.getVolume() << endl;
}
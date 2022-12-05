/*

    Створити клас Figure. Від класу Figure успадковуються
    два класи Square та Circle. Поля класу Figure є 
    діаметр(double). Функції класу Figure:
    - конструктор з параметрами;
    - функції доступу до поля класу;
    - чиста віртуальна функція підрахунку периметру;
    - чиста віртуальна функція підрахунку площі.
    У класах Square та Circle реалізувати віртуальні функції.
    У класі Square додатково реалізувати функцію підрахунку 
    довжини сторони, а у класі Circle функцію підрахунку радіусу.
    При зверненні до невіртуальних методів класів Circle та Square
    перетворити покажчик базового класу в покажчик класу спадкоємця
    за допомогою dynamic_cast. 

*/

#include <iostream>
#include <Windows.h>
#include "Circle.h"
#include "Square.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure* figure = new Square(5);

    cout << " --- Квадрат --- " << endl;
    cout << "Площа: " << figure->getArea() << " см^2" << endl;
    cout << "Периметр: " << figure->getPerimeter() << " см" << endl;
    
    Square* square = dynamic_cast<Square*> (figure);
    cout << "Сторона: " << square->getSide() << " см" << endl;

    delete figure;
    
    figure = new Circle(4);

    cout << " --- Коло --- " << endl;
    cout << "Площа: " << figure->getArea() << " см^2" << endl;
    cout << "Периметр: " << figure->getPerimeter() << " см" << endl;

    Circle* circle = dynamic_cast<Circle*> (figure);
    cout << "Радіус: " << circle->getRadius() << " см" << endl;

    delete figure;
}
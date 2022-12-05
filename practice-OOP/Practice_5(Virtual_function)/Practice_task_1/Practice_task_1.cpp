/*

    Створити абстрактний клас Progression. Поля класу:
    - перший елемент;
    - крок прогресії.
    Методи класу: 
    - конструктор з параметрами;
    - функції доступу до полів класу;
    - чиста віртуальна функція підрахунку елементу;
    - чиста віртуальна функція підрахунку суми прогресії.

    Створити два класи ArithmeticProgression та 
    GeometricProgression, які успадковуються від класу 
    Progression. Реалізувати віртуальні функції згідно
    класу. 

*/


#include <iostream>
#include <Windows.h>

#include "ArithmeticProgression.h"
#include "GeometricProgression.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ArithmeticProgression arithProg;
    GeometricProgression geomProg;
    Progression *progression[2] = { &arithProg ,&geomProg };

    int sizeProgression = 6;

    for (int i = 0; i < 2; i++)
    {
        progression[i]->setFirstElement(5);
        progression[i]->setStep(2);
    }

    cout << " --- Арифметична --- ";
    cout << "\nПерший елемент: " << progression[0]->getFirstElement() << endl;
    cout << "Шаг прогресії: " << progression[0]->getStep() << endl;
    for (int i = 1; i <= sizeProgression; i++)
    {
        cout << progression[0]->getElement(i) << " ";
    }
    cout << "\nСума арифметичної прогресії: " 
        << progression[0]->getSum(sizeProgression) << endl;

    cout << "\n --- Геометрична --- ";
    cout << "\nПерший елемент: " << progression[1]->getFirstElement() << endl;
    cout << "Шаг прогресії: " << progression[1]->getStep() << endl;
    for (int i = 1; i <= sizeProgression; i++)
    {
        cout << progression[1]->getElement(i) << " ";
    }
    cout << "\nСума геометричної прогресії: "
        << progression[1]->getSum(sizeProgression) << endl;
}
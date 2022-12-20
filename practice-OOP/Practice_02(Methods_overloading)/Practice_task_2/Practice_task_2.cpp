/*

    Створити клас Fraction, для опису звичайного дробу.
    Поля: 
    - чисельник та знаменник.
    Методи:
    - конструктори;
    - функція друку дробу;
    - група "сетерів".
    Перевантаження:
    - складання дробів;
    - віднімання дробів;
    - множення дробів;
    - ділення дробів;
    - оператор присвоєння.

*/

#include "Fraction.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Створення змінних
    Fraction firstFraction(1,3);
    Fraction secondFraction(1,4);
    Fraction thirdFraction(1, 5);
    firstFraction.printFraction();
    cout << endl;

    cout << " --- Operator(-) ---\n";
    firstFraction = thirdFraction - secondFraction;
    cout << "Початковий дріб: ";
    firstFraction.printFraction();
    cout << endl;

    cout << " --- Operator(+) ---\n";
    firstFraction = thirdFraction + secondFraction;
    cout << "Дріб: ";
    firstFraction.printFraction();
    cout << endl;

    cout << " --- Operator(*) ---\n";
    firstFraction = thirdFraction * secondFraction;
    cout << "Дріб: ";
    firstFraction.printFraction();
    cout << endl;

    cout << " --- Operator(/) ---\n";
    firstFraction = thirdFraction / secondFraction;
    cout << "Дріб: ";
    firstFraction.printFraction();
}
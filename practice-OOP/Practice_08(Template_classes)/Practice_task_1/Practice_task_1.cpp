/*

    Створити шаблонний клас PairOfNumbers. 
    У класі наявні два поля(числа). 
    Методи класу: 
    - конструктор з параметрами;
    - сетери для полів класу;
    - функція пошуку максимального числа;
    - функція swap;
    - функція друку чисел.

    Методи класів реалізувати у cpp файлі,
    перед цим явно оголосити два шаблони з 
    типами даних: 
    - int;
    - double.

*/


#include <Windows.h>
#include "PairOfNumbers.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PairOfNumbers<int> numbersInt(5, 11);
    PairOfNumbers<double> numbersDouble(1.89, 99.17);

    cout << " --- Друк чисел ---\n";
    numbersInt.printNumbers();
    numbersDouble.printNumbers();

    cout << "\n--- Максимальне число ---\n";
    cout << "Максимальне  число(int): " << numbersInt.getMax() << "\n";
    cout << "Максимальне  число(double): " << numbersDouble.getMax() << "\n";

    cout << "\n--- Зміна чисел ---\n";
    numbersInt.swapNumbers();
    numbersDouble.swapNumbers();

    //Друк чисел
    numbersInt.printNumbers();
    numbersDouble.printNumbers();
}
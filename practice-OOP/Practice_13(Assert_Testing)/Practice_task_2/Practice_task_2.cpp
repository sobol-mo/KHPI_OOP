/*

    Створити клас ArrayFile з полем 
    шлях до файлу. Реалізувати методи:
    - конструктор з параметром;
    - сетер для поля класу;
    - функція зчитування цілочисельного масиву,
    яка повертає vector<int>;
    - функція заміни масива у файлі.

    Створити функцію з тестами для вектора:
    - розмір вектора більше 0;
    - кожен елемент більший за 0;
    - сума всіх елементів менша за 1000.

    Для демонстрації створити вектор, зчитати 
    масив з файлу. Провести тест, якщо тест успішний
    помножити всі непарні елементи на 10 та перезаписати
    масив у файл.

*/

#include <Windows.h>
#include <algorithm>
#include <iomanip>
#include "ArrayFile.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const string path = "array.txt";
    ArrayFile file(path);
    
    vector<int> vectorInt = file.getArray();
    
    cout << " --- Початковий масив ---\n";
    for_each(vectorInt.begin(), vectorInt.end(), 
        [](const int number) { cout << setw(4) << number; });
    cout << '\n';

    testingVector(vectorInt);

    for_each(vectorInt.begin(), vectorInt.end(),
        [](int& number) { number % 2 == 1 ? number *= 10 : number; });

    cout << "\n--- Змінений масив ---\n";
    for_each(vectorInt.begin(), vectorInt.end(),
        [](const int number) { cout << setw(4) << number; });

    file.setArray(vectorInt);
}
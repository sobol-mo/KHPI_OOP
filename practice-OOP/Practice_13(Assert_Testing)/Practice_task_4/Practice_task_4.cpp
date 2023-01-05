/*

    Створити клас Time з полями:
    - години;
    - хвилини;
    - секунди.
    Методи класу:
    - конструктор з параметрами за замовчуванням;
    - група сетерів класу.
    Перевантаження:
    - оператор(<<);
    - оператор(==) для порівняння часу.

    У конструкторі та сетерах передбачити виняткові 
    ситуації, обробити їх за допомогою assert.

*/

#include <Windows.h>
#include "Time.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Time firstTime(12, 56, 41);
    Time secondTime(22, 45, 20);

    cout << " --- Друк інформації ---\n";
    cout << "Перший час: " << firstTime << endl;
    cout << "Другий час: " << secondTime << endl;

    if (firstTime == secondTime) cout << "\nЧас збігається\n";
    else cout << "\nЧас не збігається\n";

    firstTime.setHours(25).setMinutes(60).setSeconds(55);
}
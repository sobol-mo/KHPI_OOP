/*

    Створити клас Sphere. Поля класу:
    - колір кулі(string);
    - об'єм кулі.
    Методи класу:
    - конструктор з параметром за замовчуванням;
    - конструктор копіювання.
    Перевантаження:
    - перевантаження оператора(<), який порівнює
    назви кольорів;
    - перевантаження оператора круглих дужок(функтор),
    який порівнює об'єм куль;
    - перевантаження оператора(<<).

*/

#include <Windows.h>
#include <set>
#include "Sphere.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int arraySize = 4;
    Sphere arraySphere[arraySize] = {Sphere("Зелений",89.81),
                                     Sphere("Жовтий",3.94),
                                     Sphere("Срібний",17.05),
                                     Sphere("Нефритовий",486.39) };

    //Створення контейнера set<Sphere>
    //При сортуванні використовується перевантажений operator< 
    set<Sphere> sphereSetFirst;
    for (int i = 0; i < arraySize; i++)
    {
        sphereSetFirst.insert(*(arraySphere + i));
    }

    cout << " --- Друк set<Sphere> ---\n";
    for (const auto& sphere : sphereSetFirst) 
        cout << sphere << endl;


    //Створення контейнера set<Sphere, Sphere>
    //При сортуванні використовується функтор,
    //який сортує за об'ємом
    set<Sphere, Sphere> sphereSetSecond;
    for (int i = 0; i < arraySize; i++)
    {
        sphereSetSecond.insert(*(arraySphere + i));
    }

    cout << "\n--- Друк set<Sphere, Sphere> ---\n";
    for (const auto& sphere : sphereSetSecond)
        cout << sphere << endl;
}
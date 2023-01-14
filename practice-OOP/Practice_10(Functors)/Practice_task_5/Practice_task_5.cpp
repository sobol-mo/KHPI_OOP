/*

    Створити клас-функтор Compare,
    у якому наявне перевантаження оператора
    круглих дужок для порівняння двох чисел(int).

    Реалізувати функцію-предикат, яка порівнює
    два числа з типом int.

    Для демонстрації програми створити чотири
    контейнери map з ключем типу int, значенням
    типу string. Третій параметр шаблону:
    - у першому map стандартний функтор less;
    - у другому map стандартний функтор greater;
    - у третьому map прототип функції-предикату, в
    аргумент конструктора передати ім'я створеного 
    предикату;
    - у четвертому map функтор Compare.

    Створити функтор Print, з перевантаженням оператора
    круглих дужок для друку контейнера map. Роздрукувати
    результати створених контейнерів.

*/

#include <Windows.h>
#include <functional>
#include "Compare.h"
#include "Print.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Print printMap;

    //Створення першого map
    map<int, string, less<int>> firstMap = {{10,"яблук"},
        {15, "груш"},{21, "арбуз"}, {30, "слив"}};
    
    cout << " --- map<int, string, less<int>> ---\n";
    printMap(firstMap);

    //Створення другого map
    map<int, string, greater<int>> secondMap = { {10,"яблук"},
        {15, "груш"},{21, "арбуз"}, {30, "слив"} };

    cout << "\n--- map<int, string, greater<int>> ---\n";
    printMap(secondMap);

    //Створення третього map
    map<int, string, bool(*)(int, int)> thirdMap(myGreater);
    thirdMap.insert(firstMap.begin(), firstMap.end());

    cout << "\n--- Сортування за допомогою myGreater() ---\n";
    printMap(thirdMap);

    //Створення четвертого map
    map<int, string, Compare> fourthMap(firstMap.begin(), firstMap.end());

    cout << "\n--- Сортування за допомогою класу-функтора ---\n";
    printMap(thirdMap);
}
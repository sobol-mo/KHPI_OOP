/*

    Створити класс DivisionSix, який рахує суму всіх чисел,
    які діляться на 6, у діапазоні (0 - n).
    Поля класу:
    - Сума чисел 
    - Права межа 
    - Ліва межа
    Методи класу:
    - Конструктор за замовченням
    - Сетер правої межі
    - Функція підрахунку суми

*/

#include "DivisionSix.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int rightIndex = 0;
    DivisionSix divSix;

    cout << "Програма для підрахунку суми чисел, які діляться на 6"
        << " в заданому діапазоні\n";
    cout << "Введіть праву границю діапазону: ";
    cin >> rightIndex;

    divSix.setRightIndex(rightIndex);
    cout << "Сума чисел в діапазоні (0 - " 
        << rightIndex << "): " << divSix.calculateSum();
}

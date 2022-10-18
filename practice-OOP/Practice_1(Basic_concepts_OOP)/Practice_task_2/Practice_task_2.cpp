/*

    Створити клас MyString, поля: динамічний рядок та його довжина.
    Методи класу:
    - Конструктор з параметрами: ініціалізація рядка та довжини
    - Метод getString() повертає рядок
    - Метод getLength() повертає довжину рядка
    - Метод copy(),який копіює рядок
    - Деструктор для звільнення пам'яті

*/

#include "MyString.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char* tempStr = new char[7] {"My Str"};
    MyString str(tempStr);

    cout << "Рядок: " << str.getString() << '\n';
    cout << "Довжина: " << str.getLength() << '\n';

    str.copy("Favorite");
    cout << "Рядок: " << str.getString() << '\n';
    cout << "Довжина: " << str.getLength() << '\n';
}
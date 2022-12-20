/*

    Створити клас MyString.
    Поля: 
    - динамічний рядок;
    - довжина рядка.
    Методи класу:
    - конструктор з параметрами;
    - метод getString() повертає рядок;
    - метод getLength() повертає довжину рядка;
    - метод copy(),який копіює рядок;
    - деструктор для звільнення пам'яті.

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
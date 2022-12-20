/*

    Переробити клас MyString з першої практики.
    Поля:
    - динамічний рядок;
    - довжина рядка.
    Методи класу:
    - конструктор з параметрами;
    - конструктор за замовчуванням;
    - конструктор копіювання;
    - метод getString() повертає рядок;
    - метод getLength() повертає довжину рядка;
    - метод copy(),який копіює рядок;
    - деструктор для звільнення пам'яті.
    Перевантаження(як дружні функції):
    - оператор(>>), який перезаписує рядок;
    - оператор(<<), який друкує рядок;
    - оператор(+), додає один рядок до іншого;
    - оператор присвоєння(через методи класу).

*/

#include "MyString.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    MyString strFirst("Рядок 1");
    MyString strSecond(strFirst);

    cout << "Перший рядок: " << strFirst << endl;
    cout << "Другий рядок: " << strSecond << endl;

    cout << " --- Оператор(>>) ---\n";
    cout << "Введіть перший рядок: ";
    cin >> strFirst;

    cout << "Введіть другий рядок: ";
    cin >> strSecond;

    cout << " --- Оператор(<<) ---\n";
    cout << "Перший рядок: " << strFirst << 
        "  Довжина: "<< strFirst.getLength() << endl;
    cout << "Другий рядок: " << strSecond <<
        "  Довжина: " << strSecond.getLength() << endl;

    cout << " --- Конкатенація ---\n";
    strFirst = strFirst + strSecond;
    cout << "Новий рядок: " << strFirst <<
        "  Довжина: " << strFirst.getLength() << endl;
}
/*

    Створити клас Сoordinates, у якого три поля координат.
    Методи класу:
    - конструктори;
    Перевантаження класу(як дружні функції):
    - оператор додавання;
    - оператор віднімання;
    - оператор множення на число;
    - оператор(<<), для друку координат;
    - оператор(>>), для оновлення полів.
    Перевантаження, через методи класу:
    - оператор присвоєння;
    - постфіксний інкримент;
    - префіксний декримент;

*/

#include "Coordinates.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Coordinates coordFirst;
    Coordinates coordSecond(-1, 2, 0);

    cout << "Перші координати: " << coordFirst << endl;
    cout << "Другі координати: " << coordSecond << endl;

    cout << "Введіть значення перших координат" <<
        "(x,y,z): ";
    cin >> coordFirst;
    cout << "Оновлені координати: " << coordFirst << endl;

    cout << " --- Інкримент, декримент ---\n";
    coordFirst++;
    --coordSecond;
    cout << "Перші координати: " << coordFirst << endl;
    cout << "Другі координати: " << coordSecond << endl;

    cout << " --- Додавання, множення ---\n";
    coordFirst = coordSecond + coordFirst;
    coordFirst = coordFirst * 2;
    cout << "Оновлені перші координати: " << coordFirst << endl;
    cout << "Другі координати: " << coordSecond << endl;

    cout << " --- Віднімання ---\n";
    coordSecond = coordFirst - coordSecond;
    cout << "Оновлені другі координати: " << coordSecond << endl;
}
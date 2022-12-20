/*

    Створити клас Figure.
    Поля класу:
    - довжина;
    - ширина.
    Методи:
    - функції доступу до полів класу.

    Створити клас CostSquareMeter. Полем класу
    є вартість квадратного метру(int).
    Методи класу:
    - гетер для поля класу;
    - сетер для поля класу.

    Створити клас Room, полем якого є висота
    кімнати. Клас Room є спадкоємцем класу 
    Figure та CostSquareMeter. 
    Методи класу:
    - функція підрахунку площі;
    - функція підрахунку ціни за площу;
    - функція підрахунку об'єму;
    - функції доступу до поля класу.

*/

#include "Room.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Room firstRoom;
    Room secondRoom(5, 4, 2);

    cout << "Перша кімната\n";
    firstRoom.setCost(200);
    cout << "Площа: " << firstRoom.getSquare() << " м^2\n";
    cout << "Ціна за квадратний метр: " << firstRoom.getCost() << endl;
    cout << "Ціна кімнати: " << firstRoom.getCostSquare() << endl;
    cout << "Висота кімнати: " << firstRoom.getHeight() << " м\n";
    cout << "Об'єм кімнати: " << firstRoom.getRoomVolume() << " м^3\n";

    cout << "\nДруга кімната\n";
    secondRoom.setCost(500);
    cout << "Площа: " << secondRoom.getSquare() << " м^2\n";
    cout << "Ціна за квадратний метр: " << secondRoom.getCost() << endl;
    cout << "Ціна кімнати: " << secondRoom.getCostSquare() << endl;
    cout << "Висота кімнати: " << secondRoom.getHeight() << " м\n";
    cout << "Об'єм кімнати: " << secondRoom.getRoomVolume() << " м^3\n";
}
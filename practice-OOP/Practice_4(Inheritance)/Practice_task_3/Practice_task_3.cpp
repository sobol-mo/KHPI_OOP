/*

    Створити клас Toy, який містить поля:
    - назва;
    - ціна.
    Методи класу:
    - функції доступу до полів.

    Створити клас WarehouseInfo, який є 
    спадкоємцем класу Toy.
    Поля класу:
    - кількість іграшок;
    - загальна ціна іграшок.
    Методи:
    - функції доступу до полів.

    Створити клас Information, який 
    є спадкоємцем WarehouseInfo.
    Методи класу:
    - друк інформації про іграшку;
    - друк інформації про іграшку на складі.

*/

#include "Information.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Information toy;

    toy.setName("Конструктор");
    toy.setPrice(500);
    toy.setCount(45);

    cout << " --- Інформація про іграшку --- \n";
    toy.printInfoToy();
    toy.printWarehouseInfo();
}
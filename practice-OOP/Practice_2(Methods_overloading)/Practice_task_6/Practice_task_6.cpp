/*

    Створити два класи Car, CarPark. 
    Поля класу Car:
    - марка машини;
    - ціна.
    Методи класу Car:
    - функції доступу до полів;
    - функція друку машини.
    Перевантаження Car:
    - оператор присвоєння.
    Поля класу CarPark:
    - динамічний масив машин;
    - розмір масиву.
    Методи класу CarPark:
    - конструктор;
    - деструктор;
    - функція друку масиву;
    - функція доступу до поля розміру масиву.
    Перевантаження класу CarPark:
    - оператор присвоєння; 
    - оператор додавання(додавати об'єкт машини);
    - оператор[] повертає елемент масиву Car;

*/

#include "CarPark.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 3;
    
    //Ініціалізація масиву машин
    Car masCars[SIZE] = { Car("Volvo", 6000),
        Car("BMW",15000), Car("Subaru",12500) };

    //Ініціалізація класу CarPark
    CarPark carPark(masCars, SIZE);
    carPark.print();

    //Ініціалізація нового об'єкту машини
    Car newCar("Audi", 11300);

    //Додавання нової машини в CarPark
    carPark = carPark + newCar;
    
    cout << endl;
    carPark.print();

    //Замінюємо перше авто
    carPark[0] = Car("Ford", 10000);

    cout << endl;
    carPark.print();
}



/*

    Створити шаблонний клас SmartPointer, який реалізовує
    роботу покажчика та здійснює автоматичний контроль за
    пам'яттю.
    Полем класу є покажчик на об'ект. Методи класу:
    - конструктор з параметром;
    - конструктор копіявання, за допомогою якого передається
    управління об'єктом;
    - деструктор;
    - перевантаження оператора(=);
    - перевантаження оператора(*);
    - перевантаження оператора(->);
    - перевірки на наявність об'єкту.

    Реалізовувати клас SmartPointer у заголовному файлі. 
    Роботу з покажчиком реалізувати за допомогою семантики 
    переміщення, тобто володіння об'єктом передається від 
    одного покажчика іншому.

    Створити клас Account. Поля класу Account:
    - пошта;
    - пароль.
    Методи класу:
    - конструктор з параметрами;
    - функція зміни паролю;
    - функція друку інформації.

    Для демонстрації роботи динамічно виділити пам'ять для 
    об'єкту класу Account. Створити пару покажчиків та передати
    управління з одного покажчика іншому. 

*/

#include <Windows.h>
#include "SmartPointer.h"
#include "Account.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //Створення об'єкту класу myAccount
    Account* myAccount = new Account("ztl@gmail.com", "123qap&");
    
    //Створення двох покажчиків
    SmartPointer<Account> firstPointer(myAccount);
    SmartPointer<Account> secondPointer;

    if (!firstPointer.isNull()) {
        cout << " --- 1. Друк інформації(перший покажчик) ---\n";
        firstPointer->printInformation();
    }

    if (!secondPointer.isNull()) {
        cout << " --- 1. Друк інформації(другий покажчик) ---\n";
        secondPointer->printInformation();
    }

    //Передача управління об'єктом іншому покажчику
    secondPointer = firstPointer;

    if (!firstPointer.isNull()) {
        cout << " --- 2. Друк інформації(перший покажчик) ---\n";
        firstPointer->printInformation();
    }

    if (!secondPointer.isNull()) {
        cout << " --- 2. Друк інформації(другий покажчик) ---\n";
        secondPointer->printInformation();
    }
}
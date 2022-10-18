/*

    Створити клас Product, з полями:
    оптова та роздрібна ціни, націнка - статична змінна
    Методи класу:
    - Функції доступу до полів get()/set()
    - Розрахунок роздрібної ціни

*/

#include "Product.h"
#define SIZE 5

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Product prodFirst[SIZE];
    string name;
    float whlslPrice = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << i + 1 << ". Введіть назву та опт.ціну: ";
        cin >> name >> whlslPrice;
        prodFirst[i].setName(name);
        prodFirst[i].setWholesalePrice(whlslPrice);
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (i == 3) prodFirst[i].markupChange();
        prodFirst[i].calcRetailPrice();
        cout << "Им'я: " <<
            prodFirst[i].getName();
        cout << "  Роздрібна ціна: " <<
            prodFirst[i].getRetailPrice() << endl;
    }
}
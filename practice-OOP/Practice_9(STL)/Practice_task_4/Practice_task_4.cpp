/*

    Створити клас ProductInfo, який надає
    інформацію про товар. Полями класу є:
    - назва товару;
    - кількість.
    Методи класу ProductInfo:
    - конструктор з параметрами за замовчуванням;
    - конструктор копіювання;
    - гетер для поля кількості товару;
    - функція покупки товару, кількість товару
    зменшується на 1, повертається назва товару;
    - перевантаження оператора(<<);
    - перевантаження оператора(=).

    Створити клас Store. Полем класу є vector з
    типом ProductInfo. Методи класу Store:
    - функція додавання товару;
    - функція друку всіх наявних товарів;
    - функція видалення всіх товарів, які не наявні;
    - функція видалення всіх товарів у
    проміжку [перший індекс, другий індекс);
    - перевантаження оператора квадратних дужок для
    доступу до елемента вектора.

*/

#include <Windows.h>
#include "Store.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Store myStore;
    vector<string> shoppingCart;

    try
    {
        myStore.add("Конструктор", 2);
        myStore.add("Пазли", 5);
        myStore.add("Лялька", 7);

        cout << " --- Друк наявних товарів ---\n";
        myStore.printInfo();

        //Кладемо у візок всі товари під індексом 0
        shoppingCart.push_back(myStore[0].buyProduct());
        shoppingCart.push_back(myStore[0].buyProduct());

        cout << "\nПродуктовий візок: " << endl;
        for (int i = 0; i < shoppingCart.size(); i++)
        {
            cout << i + 1 << ". " << shoppingCart[i] << endl;
        }

        //Видалення товарів, які не в наявності
        myStore.removeMissingItems();

        cout << "\n--- Оновлення список ---\n";
        myStore.printInfo();
        
        //Видалення всіх наявних товарів
        myStore.removeItemsInBetween(0, 2);

        cout << "\n--- Друк порожнього списку товарів ---\n";
        myStore.printInfo();

    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }

    return 0;
}
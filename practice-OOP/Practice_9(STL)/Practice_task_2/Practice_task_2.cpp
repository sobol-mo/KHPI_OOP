/*

    Створити клас GemstoneInfo. Полями класу є:
    - назва дорогоцінного каменю;
    - місце знаходження.
    Методи класу:
    - конструктор з параметрами за замовчуванням;
    - конструктор копіювання;
    - перевантаження оператора(=);
    - перевантаження оператора(<<).

    Створити шаблонний клас Collection.
    Полем класу є контейнер multimap, де ключ - 
    ціна(int), значення - інформація(довільний тип).
    Методи класу Collection:
    - порожній конструктор за замовчуванням;
    - конструктор копіювання;
    - функція додавання елемента;
    - функція видалення елемента за ключом;
    - функція очищення контейнера;
    - функція друку інформації;
    - перевантаження оператора(+) для об'єднання
    колекцій;
    - перевантаження оператора(=).

    Явно оголосити шаблон класу 
    з типом даних GemstoneInfo.

*/

#include <Windows.h>
#include "Collection.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Створення двох колекцій
    Collection<GemstoneInfo> firstCollection;
    Collection<GemstoneInfo> secondCollection;

    try
    {

       //Створення першої колекції
       firstCollection.add(10000, GemstoneInfo("Ізумруд", "США"));
       firstCollection.add(10000, GemstoneInfo("Бріліант", "Німеччина"));
       firstCollection.add(20000, GemstoneInfo("Сапфір", "Україна"));

       //Створення другої колекції
       secondCollection.add(15000, GemstoneInfo("Сапфір", "Швеція"));
       secondCollection.add(33000, GemstoneInfo("Рубін", "Данія"));

       cout << " --- Перша колекція ---\n";
       firstCollection.printCollection();

       cout << "\n--- Друга колекція ---\n";
       secondCollection.printCollection();

       //Об'єднання колекцій
       secondCollection = secondCollection + firstCollection;

       cout << "\n--- Оновлена друга колекція ---\n";
       secondCollection.printCollection();

       //Видалення всіх елементів з ключем 10000
       if (firstCollection.remove(10000)) {
           cout << "\nЕлемент видалено!" << endl;
       }
       else {
           cout << "\nЕлемент не знайдено!" << endl;
       }

       cout << "\n--- Оновлена перша колекція ---\n";
       firstCollection.printCollection();

       //Очищення колекцій
       firstCollection.clear();
       secondCollection.clear();

       cout << "\n--- Друк порожньої колекції ---\n";
       firstCollection.printCollection();
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}
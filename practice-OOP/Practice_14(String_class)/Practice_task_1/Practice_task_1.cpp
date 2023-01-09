/*

    Створити клас WordCounter, який рахує 
    кількість слів у файлі, заданого користувачем.
    Передбачити ситуацію, в якій шукане слово
    закінчується розділовим знаком:
    - кома;
    - крапка;
    - знак питання;
    - знак оклику.

*/

#include <Windows.h>
#include "WordCounter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        
    WordCounter wordCounter;
    string word;
    const string path = "text.txt";

    try
    {
        cout << "Введіть слово для пошуку: ";
        cin >> word;

        cout << "Кількість шуканих слів у файлі: "
            << wordCounter.getCount(path, word);
    }
    catch (const exception& exception)
    {
        cout << exception.what() << endl;
    }
}
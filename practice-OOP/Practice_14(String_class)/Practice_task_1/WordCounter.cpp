#include "WordCounter.h"

//Функція порівняння поточного слова з шуканим
bool WordCounter::equal(const string& curWord, const string& word) const
{

    //Розділові знаки
    char symbols[] = { ',', '.', '?', '!' };

    //Якщо слова рівні, повертаємо true
    if (curWord == word) return true;
    
    for (int i = 0; i < sizeof(symbols); i++)
        //Додаємо до шуканого слова розділові знаки
        //Якщо є збіг повертаємо true
        if (curWord == word + symbols[i]) return true;

    //Якщо слово не знайшли повертаємо false
    return false;
}

int WordCounter::getCount(const string& path, const string& word) const
{
    ifstream fin(path);
    if (!fin.is_open())
        throw exception("Помилка відкриття файлу!");

    string curWord; //Поточне слово з файлу
    int count = 0; //Кількість слів

    while (!fin.eof())
    {
        fin >> curWord;
        if (this->equal(curWord, word)) count++;
    }

    fin.close();
    return count;
}

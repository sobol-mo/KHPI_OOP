#include "FileChecker.h"

//Конструктор з параметром
FileChecker::FileChecker(const char checkSymbol)
{
    this->checkSymbol = checkSymbol;
}

//Гетер поля класу
char FileChecker::getCheckSymbol() const
{
    return this->checkSymbol;
}

//Сетер поля класу
void FileChecker::setCheckSymbol(const char checkSymbol)
{
    this->checkSymbol = checkSymbol;
}

//Функція пошуку символу у файлі
void FileChecker::checkFile(const string& path) const
{
    ifstream fin(path);

    //Генерація повідомлення про помилку відкриття файлу
    if (!fin.is_open())
        throw Exception("Файл не відкрито!");

    int lineNumber = 0;
    string text;
    
    while (!fin.eof())
    {
        getline(fin, text);

        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == checkSymbol) {
                fin.close();

                //Генерація повідомлення про шуканий символ
                throw FileException(path, lineNumber, i);
            }
        }

        lineNumber++;
    }

    fin.close();
}
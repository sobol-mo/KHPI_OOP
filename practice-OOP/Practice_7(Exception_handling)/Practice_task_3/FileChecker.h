#pragma once

#include "FileException.h"
#include <fstream>

class FileChecker
{
private:

    //Символ, що шукають
    char checkSymbol;

public:

    //Конструктор з параметром
    FileChecker(const char checkSymbol);

    //Гетер поля класу
    char getCheckSymbol() const;
    
    //Сетер поля класу
    void setCheckSymbol(const char checkSymbol);

    //Функція пошуку символа у файлі
    void checkFile(const string& path) const;
};
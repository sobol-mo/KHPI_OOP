#include "TextTransformer.h"

//Конструктор з параметром
TextTransformer::TextTransformer(const char searchSymbol)
{
	this->searchSymbol = searchSymbol;
}

//Сетер поля класу
void TextTransformer::setSymbol(const char searchSymbol)
{
    this->searchSymbol = searchSymbol;
}

//Функція для зміни слова
void TextTransformer::transformWord(string& word) const
{
    int index = 0;

    //Шукаємо індекс символу
    while ((index = word.find(searchSymbol, index)) != -1)
    {
        //Перед та після символу всталяємо лапки
        word.insert(index, "\'");
        index += 2;
        word.insert(index, "\'");
    }
}

//Перевантаження оператора круглих дужок
void TextTransformer::operator()(const string& inputFilePath,
	const string& outputFilePath) const
{
    ifstream fin(inputFilePath);
    ofstream fout(outputFilePath);

    if (!fin.is_open() || !fout.is_open())
        throw exception("Помилка відкриття файлу");

    string word;
    while (!fin.eof())
    {
        fin >> word;

        this->transformWord(word);

        fout << word << " ";
    }

    fin.close();
    fout.close();
}
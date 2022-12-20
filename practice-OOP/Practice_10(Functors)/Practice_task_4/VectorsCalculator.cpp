#include "VectorsCalculator.h"

//Функтор для розрахунків двох векторів
void VectorsCalculator::operator()(const vector<double>& firstVect,
    const vector<double>& secondVect, const IBinaryFunction* functor)
{

    //Якщо вектор не порожній,
    //очищаємо його
    if (!resultVector.empty())
        resultVector.clear();

    for (int i = 0; i < firstVect.size() && i < secondVect.size(); i++)
    {

        //В аргументі методу push_back викливаємо функтор
        //з елементами двох векторів
        resultVector.push_back((*functor)(firstVect[i], secondVect[i]));
    }
}

//Друк результуючого вектора
void VectorsCalculator::printResult() const
{
    if (resultVector.empty())
        throw exception("Вектор порожній!");

    for (const auto& element : resultVector)
        cout << element << " ";
}
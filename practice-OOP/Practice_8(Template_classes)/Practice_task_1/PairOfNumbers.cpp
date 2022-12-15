#include "PairOfNumbers.h"

//Явне оголошення шаблонів
template PairOfNumbers<int>;
template PairOfNumbers<double>;

//Конструктор з параметрами
template<typename Type>
PairOfNumbers<Type>::PairOfNumbers(const Type& firstNumber,
                                   const Type& secondNumber)
{
	this->firstNumber = firstNumber;
	this->secondNumber = secondNumber;
}

//Сетери для полів класу
template<typename Type>
void PairOfNumbers<Type>::setFirstNumber(const Type& number)
{
	this->firstNumber = number;
}

template<typename Type>
void PairOfNumbers<Type>::setSecondNumber(const Type& number)
{
	this->secondNumber = number;
}

//Функція пошуку максимального числа
template<typename Type>
Type PairOfNumbers<Type>::getMax() const
{
	return firstNumber > secondNumber ? firstNumber : secondNumber;
}

//Функція зміни чисел
template<typename Type>
void PairOfNumbers<Type>::swapNumbers()
{
	Type temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;
}

//Функція друку чисел
template<typename Type>
void PairOfNumbers<Type>::printNumbers() const
{
	cout << "Перше число: " << firstNumber
		<< " ,друге число: " << secondNumber << endl;
}
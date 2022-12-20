#pragma once

class EvenOddFunctor
{
private:

	//Сума парних чисел
	double evenSum;

	//Сума непарних чисел
	double oddSum;

public:
	
	//Конструктор за замовчуванням
	EvenOddFunctor();

	//Функтор, який підраховує суму парних та
	//непарних чисел
	void operator()(const int number);

	//Група "гетерів" класу
	double getEvenSum() const;
	double getOddSum() const;
};
#pragma once


class Progression
{
protected:

	//Перший елемент прогресії
	int firstElement;

	//Крок прогресії
	int step;
	
public:

	//Конструктор з параметрами
	Progression(const int step = 0,
		const int firstElement = 0);

	//Група "гетерів"
	int getFirstElement() const;
	int getStep() const ;

	//Група "сетерів"
	void setFirstElement(const int firstEl);
	void setStep(const int step);

	//Чиста віртуальна функція розрахунку елементу прогресії
	virtual int getElement(const int elemNumber) = 0;

	//Чиста віртуальна функція розрахунку суми прогресії
	virtual int getSum(const int elemNumber) = 0;
};
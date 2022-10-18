#include "MyArray.h"

int randomNumber(const int min, const int max) {
	
	int randNum = rand() % (max - min) + min;
	return randNum;
}

//Конструктор за замовченням
MyArray::MyArray():
	m_sizeArr(10)
{
	m_array = new int[m_sizeArr];
	for (int i = 0; i < m_sizeArr; i++)
	{
		*(m_array + i) = randomNumber(1, 30);
	}
}

//Конструктор з параметрами
MyArray::MyArray(const int size, const bool type):
	m_sizeArr(size)
{
	srand(time(NULL));
	m_array = new int[m_sizeArr];
	if (type == 0) {
		for (int i = 0; i < m_sizeArr; i++)
		{
			cout << "Елемент " << i << ":";
			cin >> *(m_array + i);
		}
	}
	else {
		for (int i = 0; i < m_sizeArr; i++)
		{
			*(m_array + i) = randomNumber(1, 30);
		}
	}
}

//Деструктор
MyArray::~MyArray()
{
	delete[] m_array;
}

//Метод друку масиву
void MyArray::printArray() const
{
	cout << "Масив: ";
	for (int i = 0; i < m_sizeArr; i++)
	{
		cout << setw(4) << *(m_array + i);
	}
}

//Метод додавання числа в кінець масиву
void MyArray::pushBack(const int number)
{
	int* tempArr = new int[m_sizeArr + 1];
	for (int i = 0; i < m_sizeArr; i++)
	{
		*(tempArr + i) = *(m_array + i);
	}
	*(tempArr + m_sizeArr) = number;

	delete[]m_array;
	m_array = tempArr;
	m_sizeArr++;
}

//Метод сортування масиву(Сортування Шелла)
void MyArray::sortArray()
{
	int i, j, step;
	int temp;
	for (step = m_sizeArr / 2; step > 0; step /= 2) {
		for (i = step; i < m_sizeArr; i++)
		{
			temp = m_array[i];
			for (j = i; j >= step; j -= step)
			{
				if (temp < m_array[j - step])
					m_array[j] = m_array[j - step];
				else
					break;
			}
			m_array[j] = temp;
		}
	}
}
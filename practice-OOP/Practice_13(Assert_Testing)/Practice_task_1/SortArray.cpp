#include "SortArray.h"

//Функція з групою тестів сортування
void testingSort()
{
	SortArray sort;

	//Вхідні дані
	int data[] = { 8,1,2,6,7,4,3,5,9 };

	//Очікуваний відсортовані дані за зростанням
	int sortedData[] = { 1,2,3,4,5,6,7,8,9 };

	//Очікуваний відсортовані дані за спаданням
	int reverseSortedData[] = {9,8,7,6,5,4,3,2,1};

	//Розмір масиву
	int size = sizeof(data) / sizeof(int);

	//Сортування за зростанням
	sort(data, size, std::greater<int>());
	printArray(data, size);

	//Перевірка відсортованих даних
	for (int i = 0; i < size; i++) {
		assert(data[i] == sortedData[i]);
	}

	//Сортування за спаданням
	sort(data, size, std::less<int>()); 
	printArray(data, size);

	//Перевірка відсортованих даних
	for (int i = 0; i < size; i++) {
		assert(data[i] == reverseSortedData[i]);
	}
}

//Функція друку масиву
void printArray(const int* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << *(array + i) << " ";
	}
	std::cout << '\n';
}
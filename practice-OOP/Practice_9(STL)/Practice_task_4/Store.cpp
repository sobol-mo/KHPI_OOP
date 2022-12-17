#include "Store.h"

//Функція додавання товару
void Store::add(const string& name, const int amount)
{
	storage.push_back(ProductInfo(name, amount));
}

//Функція друку всіх наявних товарів
void Store::printInfo() const
{

	if (storage.empty())
		throw exception("Склад пустий!");

	for (int i = 0; i < storage.size(); i++)
	{
		cout << storage[i] << endl;
	}
}

//Функція видалення всіх товарів, які не наявні
void Store::removeMissingItems()
{
	if (storage.empty())
		throw exception("Склад пустий!");

	storage_it removeIndex;

	for (int i = 0; i < storage.size(); i++)
	{
		if (!storage[i].getAmount()) {

			removeIndex = storage.begin() + i;
			storage.erase(removeIndex);
		}
	}
}

//Функція видалення товарів у проміжку [fIndex ; sIndex)
void Store::removeItemsInBetween(const int fIndex, const int sIndex)
{
	if (fIndex < 0 || fIndex > storage.size())
		throw exception("Некоректний перший індекс!");

	if (sIndex < 0 || sIndex > storage.size())
		throw exception("Некоректний другий індекс!");

	if ((sIndex - fIndex) < 0)
		throw exception("Некоректний інтервал!");

	storage.erase(storage.begin() + fIndex, storage.begin() + sIndex);
}

//Перевантаження оператора квадратних дужок 
ProductInfo& Store::operator[](const int index)
{
	if (index < 0 && index >= storage.size())
		throw exception("Некоректний індекс!");

	return storage[index];
}
#include "Collection.h"

//Явне оголошення шаблону
template Collection<GemstoneInfo>;

//Конструктор за замовчуванням
//Потрібен для створення об'єкта класу
template<typename Type>
Collection<Type>::Collection()
{
}

//Конструктор копіювання
template<typename Type>
Collection<Type>::Collection(const Collection<Type>& object)
{
	this->container = object.container;
}

//Функція додавання елемента
//Ключем є ціна, значенням інформація
//про камінь
template<typename Type>
inline void Collection<Type>::add(const int price, const Type& newElement)
{
	this->container.insert({ price, newElement });
}

//Функція видалення елемента
template<typename Type>
bool Collection<Type>::remove(const int price)
{
	bool removeFlag = 0;

	//Якщо елемент наявний у колекції
	//видаляємо його, і змінюємо флаг
	if (container.find(price) != container.end()) {

		container.erase(price);
		removeFlag = 1;
	}

	return removeFlag;
}

//Функція очищення контейнера
template<typename Type>
void Collection<Type>::clear()
{
	container.clear();
}

//Функція друку інформації
template<typename Type>
void Collection<Type>::printCollection() const
{
	if (container.empty())
		throw exception("Колекція порожня!");

	for (auto pMultimap = container.begin(); pMultimap != container.end(); pMultimap++)
	{
		cout << "Ціна: " <<  left <<setw(8) << pMultimap->first << " | "
			<< pMultimap->second << endl;
	}
}

//Перевантаження оператора(=)
template<typename Type>
Collection<Type>& Collection<Type>::operator=(const Collection<Type>& object)
{
	this->container = object.container;

	//Повертаємо поточний об'єкт, щоб мати можливість 
	//зв'язати в ланцюжок виконання кількох операцій присвоєння 
	return *this;
}

//Перевантаження оператора(+)
template<typename Type>
Collection<Type> Collection<Type>::operator+(const Collection<Type>& object)
{

	for (auto pMultimap = object.container.begin(); pMultimap != object.container.end(); pMultimap++)
	{
		this->add(pMultimap->first, pMultimap->second);
	}

	return *this;
}

#pragma once

template<typename Type>
class SmartPointer
{
private:

	//Покажчик на об'єкт
	Type* ptr;

public:

	//Конструктор з параметром
	SmartPointer(Type* ptr = nullptr);

	//Конструктор копіювання
	SmartPointer(SmartPointer& ptr);

	//Деструктор
	~SmartPointer();

	//Перевантаження оператора(=)
	SmartPointer<Type>& operator=(SmartPointer& object);

	//Перевантаження оператора(*)
	Type& operator*() const;

	//Перевантаження оператора(->)
	Type* operator->() const;

	//Функція перевірки на порожнечу
	bool isNull() const;
};

//Конструктор з параметром
template<typename Type>
SmartPointer<Type>::SmartPointer(Type* ptr)
{
	this->ptr = ptr;
}

//Конструктор копіювання
template<typename Type>
SmartPointer<Type>::SmartPointer(SmartPointer& object)
{
	//Передача управління поточному покажчику
	this->ptr = object.ptr;

	//Розриваємо зв'язок об'єкта з попереднім покажчиком
	object.ptr = nullptr;
}

//Деструктор
template<typename Type>
SmartPointer<Type>::~SmartPointer()
{
	if(!isNull)
		delete this->ptr;
}

//Перевантаження оператора(=)
template<typename Type>
SmartPointer<Type>& SmartPointer<Type>::operator=(SmartPointer& object)
{
	//Якщо самоприсвоєння
	if (&object == this)
		return *this;

	//Видаляємо дані про минулий об'єкт
	if (!isNull)
		delete this->ptr;
	
	//Передача управління об'єктом
	this->ptr = object.ptr;
	object.ptr = nullptr;
	
	//Якщо ланцюг привласнень
	return *this;
}

//Перевантаження оператора(*)
template<typename Type>
Type& SmartPointer<Type>::operator*() const
{
	return *ptr;
}

//Перевантаження оператора(->)
template<typename Type>
inline Type* SmartPointer<Type>::operator->() const
{
	return ptr;
}

//Функція перевірки на наявність об'єкту
template<typename Type>
inline bool SmartPointer<Type>::isNull() const
{
	return ptr == nullptr;
}
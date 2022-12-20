#pragma once

//Клас-функтор для
//друку контейрнера map
class Print
{
public:

	//У перевантаженні оператора 
	//використовується шаблон
	template<typename Map>
	void operator()(const Map& map) const;

};

//Метод реалізований у файлі .h
//для того, щоб не оголошувати явно шаблони
template<typename Map>
inline void Print::operator()(const Map& map) const
{
	for (const auto& element : map) {
		cout << "В наявності: " << element.first
			<< " " << element.second << endl;
	}
}
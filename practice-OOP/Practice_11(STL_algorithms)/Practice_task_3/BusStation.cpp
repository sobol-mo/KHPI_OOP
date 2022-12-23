#include "BusStation.h"

//Конструктор з параметром
BusStation::BusStation(const string& name)
{
	this->name = name;
}

//Функція додавання автобуса
void BusStation::addBus(const Bus& bus)
{
	//Якщо автобус виїхав із зупинки
	if (bus.getLocationFlag() == 0) {

		vector<Bus>::iterator it;

		//Перевірка на наявність номера у списку автобусів, що приїжджають
		if ((it = find(arrivingBuses.begin(), arrivingBuses.end(),
			bus.getBusNumber())) != arrivingBuses.end()) {

			//Якщо наявний видаляємо
			arrivingBuses.erase(it);
		}

		departedBuses.push_back(bus);
	}
	else {
		arrivingBuses.push_back(bus);
	}
}

//Функція сортування списків автобусів
void BusStation::sortList()
{
	sort(arrivingBuses.begin(), arrivingBuses.end());
	sort(departedBuses.begin(), departedBuses.end());
}

//Функція порівняння автобусів, що їдуть з однієї станції
//з автобусами, що приїжджають на іншу станцію
bool BusStation::equalDepartedArriving(BusStation& station)
{

	if (departedBuses.size() != station.arrivingBuses.size())
		throw exception("Кількість автобусів, що приїжджають та їдуть різна!");

	//Сортуємо списки автобусів
	this->sortList();
	station.sortList();

	//Для порівняння використовуємо перевантаження оператора== у класі Bus
	bool flag = equal(this->departedBuses.begin(), this->departedBuses.end(),
		station.arrivingBuses.begin());

	return flag;
}

//Функція пошуку схожих номерів автобусів, що їдуть/приїжджають
vector<int> BusStation::getDepartedArrivingBuses(const BusStation& station)
{
	vector<int> busNumbers;

	for (const auto& elem : this->departedBuses) {
		
		if (find(station.arrivingBuses.begin(), station.arrivingBuses.end(), elem) 
			!= station.arrivingBuses.end()) {
			
			//Якщо знайшли номер, додаємо до busNumbers
			busNumbers.push_back(elem.getBusNumber());
		}
	}

	return busNumbers;
}

//Функція друку інформації
void BusStation::printInformation() const
{
	cout << "Назва станції: " << name;

	cout << "\nАвтобуси, що приїжджають: ";
	for (const auto& elem : arrivingBuses)
		cout << elem.getBusNumber() << " ";

	cout << "\nАвтобуси, що їдуть: ";
	for (const auto& elem : departedBuses)
		cout << elem.getBusNumber() << " ";

	cout << endl;
}
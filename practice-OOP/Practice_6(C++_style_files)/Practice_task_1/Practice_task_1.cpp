/*

	Створити клас Car. Поля класу Car:
	- бренд;
	- потужність двигуна;
	- ціна.
	Методи класу Car:
	- група функцій get;
	- перевантаження оператора
	потокового виводу.

	Створити клас CarParkFile. Полями
	класу CarParkFile є:
	- шлях до файлу;
	- кількість машин.
	Методи класу CarParkFile:
	- конструктор з параметром(шлях до файлу);
	- функція запису масиву машин у файл;
	- функція запису інформації про машину у файл;
	- друк інформації про автопарк;
	- очищення файлу.

	Створити масив машин та декілька окремо. Записати
	інформацію про машини в файл та надрукувати на екрані.
	Наприкінці програми очистити файл.

*/

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

#include "CarParkFile.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int numberOfCars = 5;
	Car carPark[numberOfCars] = { Car("BMW", 301.7, 42000),
	                              Car("Audi", 295, 30000), 
	                              Car("Kia", 190, 23000),
	                              Car("Mazda", 223.6, 35000),
	                              Car("Honda", 201, 27000) };

	Car firstCar("Hyundai", 187.3, 25000);
	Car secondCar("Ford", 360, 55000);


	string path = "fileCars.txt";
	CarParkFile file(path);

	//Записуємо інформацію про автосалон у файл
	file.writingToFile(carPark, numberOfCars);
	
	//Додаємо декілька машин
	file.addCarToFile(firstCar);
	file.addCarToFile(secondCar);

	//Друк інформації на екран
	file.printCarPark();

	//Очищаємо файл
	file.clearFile();
}
/*

    Створити мині-гру схожу на змійку. Правила гри:
	- у грі наявне поле-квадрат, створене зі знаку зірочки;
	- на полі наявний персонаж, якого можна зобразити за 
	допомогою знаку решітки;
	- персонаж переміщується у чотири сторони за допомогою меню;
	- при переміщенні персонажа на його місці з'являється 0;
	- гра закінчується коли персонаж врізається у границі поля,
	або 0;
	- після закінчення гри підраховується загальна кількість 0 
	та друкується на екрані.
	Гра реалізується за допомогою трьох класів:
	- клас PlayingField, в ньому реалізована логіка роботи поля;
	- клас GameCharacter наслідується від PlayingField,
	відповідає за розташування персонажа на полі;
	- клас GameEngine наслідується від GameCharacter, і реалізовує
	логіку переміщення персонажа та кінця гри.

*/

#include "GameEngine.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int itemMenu = 0;
	GameEngine game;
	game.printField();

	//Меню гри
	while (true)
	{
		cout << "1 - Крок вгору" << endl;
		cout << "2 - Крок вниз" << endl;
		cout << "3 - Крок вліво" << endl;
		cout << "4 - Крок вправо" << endl;
		cout << " -> ";
		cin >> itemMenu;
		//Очищення консолі
		system("cls");

		switch (itemMenu)
		{
		case 1:
			game.stepUp();
			game.printField();
			break;
		case 2:
			game.stepDown();
			game.printField();
			break;
		case 3:
			game.stepLeft();
			game.printField();
			break;
		case 4:
			game.stepRight();
			game.printField();
			break;
		default:
			exit(0);
			break;
		}
	}
}
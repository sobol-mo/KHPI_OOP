#pragma

#include <iostream>
using namespace std;

/*
	Макрос assert з параметрами:
	- умова;
	- повідомлення про помилку.
	Щоб завершити програму достроково 
	використовується функція abort().
*/
#define assert(condition, message) \
if(!(condition)) { printf("Fatal error: %s\n", message); abort(); } 

//Клас-функтор
class StringTester
{
public:

	//Перевантаження оператора круглих дужок
	void operator()(const char* str) const;
};
// Проблема: Ромбовидное наследование
// https://www.youtube.com/watch?v=UfvBDX5eWFo&ab_channel=%5Bit-efrem%5DCODE%26ROBOTS

#include <iostream>
using namespace std;
class Base {
public:
	int i;
};

class cl1 : public Base
{
public:
	int j;
};

class cl2 : public Base
{
public:
	int k;
};

class cl3 : public cl1, public cl2
{
public:
	int m;
};
int main()
{
	cl3 d;
	
	//d.i = 10;
	d.cl1::i = 10;
	d.cl2::i = 101;
	d.j = 20;
	d.k = 30;
	d.m = 40;

	//cout << d.i << " ";	// среда запрещает такое обращение
	cout << d.cl1::i << " ";
	cout << d.cl2::i << " " << endl;

	cout << d.j << " " << d.k << " ";
	cout << d.m << endl;


}

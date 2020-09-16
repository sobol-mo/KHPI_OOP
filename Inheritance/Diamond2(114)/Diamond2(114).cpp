// По материалам:
// Виртуальное наследование c++. Ромбовидное наследование c++. Изучение С++ для начинающих. Урок #114
// https://youtu.be/oqpx7L5ipbw

#include <iostream>
using namespace std;

class Component
{
public:
	Component(string companyName)
	{
		cout << "constructor Component " << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU : public Component
{
public:
	GPU(string companyName) : Component(companyName)
	{
		cout << "constructor GPU " << endl;		
	}
};
class Memory : public Component
{
public:
	Memory(string companyName) : Component(companyName)
	{
		cout << "constructor Memory " << endl;
	}
};
class GraphicCard : public GPU, public Memory
{
public:
	GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
	{
		cout << "constructor GraphicCard " << endl;
	}
};

int main()
{
	GraphicCard gc("AMD", "Sumsung");

	//cout << gc.companyName << endl;	// среда запрещает такое обращение
	cout << gc.GPU::companyName << endl;
	cout << gc.Memory::companyName << endl;
}


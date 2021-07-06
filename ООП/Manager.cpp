#include "Manager.h"

Manager::Manager()
{
}

Manager::Manager(string _name, int _age)
{
	name = _name;
	age = _age;

}

void Manager::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

Manager::~Manager()
{

}

#pragma once
#include <iostream>
using namespace std;

class Weapon
{
public:
	Weapon();
	virtual void OneUse() = 0;
	~Weapon();

};


#pragma once
#include "Weapon.h"

class Pistol : public Weapon
{
protected:
	string model;
	int caliber;

public:
	Pistol();
	Pistol(string, int);
	void OneUse() override;
	void Attack();
	~Pistol();

private:

};


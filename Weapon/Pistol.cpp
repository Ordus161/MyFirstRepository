#include "Pistol.h"

Pistol::Pistol()
{
	model = "beretta";
	caliber = 9.0;
}

Pistol::Pistol(string _model, int _caliber)
{
	model = _model;
	caliber = _caliber;
}

void Pistol::OneUse()
{

}

Pistol::~Pistol()
{
}

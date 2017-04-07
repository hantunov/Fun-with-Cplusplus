#include "Automobil.h"



void Automobil::ugradiMotor(Motor * _m)
{
	this->motor = _m;
}

Motor* Automobil::izvadiMotor()
{
	return motor;
}

void Automobil::staviGume(vector<Guma*> _gume)
{
	this->gume = _gume;
}

vector<Guma*> Automobil::skiniGume()
{
	return gume;
}

void Automobil::ispis()
{
	cout << "Podaci o automobilu: " << "\n\n"
		<< "Naziv: " << this->naziv << "\n"
		<< "Boja: " << this->boja << "\n"
		<< "Broj vrata: " << this->brVrata << "\n\n"
		<< "Motor: " << "\n"
		<< "naziv: " << this->motor->naziv << "\n"
		<< "kubikaza: " << this->motor->kubikaza << " cc" << "\n\n"
		<< "Gume: " << "\n"
		<< this->gume[0]->id << ": " << this->gume[0]->tip << "\n"
		<< this->gume[1]->id << ": " << this->gume[1]->tip << "\n"
		<< this->gume[2]->id << ": " << this->gume[2]->tip << "\n"
		<< this->gume[3]->id << ": " << this->gume[3]->tip << "\n";
}

Automobil::Automobil()
{
}


Automobil::~Automobil()
{
}

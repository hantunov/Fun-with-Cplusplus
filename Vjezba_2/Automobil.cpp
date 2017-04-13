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

void Automobil::setMarka(string _marka)
{
	this->marka = _marka;
}

string Automobil::getMarka()
{
	return marka;
}

void Automobil::setTip(string _tip)
{
	this->tip = _tip;
}

string Automobil::getTip()
{
	return tip;
}

void Automobil::ispis()
{
	cout << "Podaci o automobilu: " << endl
		<< "***************" << endl
		<< "Osnovni podaci: " << endl
		<< "***************" << endl
		<< this->marka << endl
		<< this->tip << endl
		<< this->boja << endl
		<< this->brVrata << " vrata" << endl
		<< "******" << endl
		<< "Motor: " << endl
		<< "******" << endl
		<< this->motor->naziv << endl
		<< this->motor->kubikaza << " cc" << endl
		<< "*****" << endl
		<< "Gume: " << endl
		<< "*****" << endl
		<< this->gume[0]->id << ": " << this->gume[0]->tip << endl
		<< this->gume[1]->id << ": " << this->gume[1]->tip << endl
		<< this->gume[2]->id << ": " << this->gume[2]->tip << endl
		<< this->gume[3]->id << ": " << this->gume[3]->tip << endl
		<< endl;
}

void Automobil::ispisFile(ofstream &ispis)
{
	ispis << "Podaci o automobilu: " << endl
		<< "***************" << endl
		<< "Osnovni podaci: " << endl
		<< "***************" << endl
		<< this->marka << endl
		<< this->tip << endl
		<< this->boja << endl
		<< this->brVrata << " vrata" << endl
		<< "******" << endl
		<< "Motor: " << endl
		<< "******" << endl
		<< this->motor->naziv << endl
		<< this->motor->kubikaza << " cc" << endl
		<< "*****" << endl
		<< "Gume: " << endl
		<< "*****" << endl
		<< this->gume[0]->id << ": " << this->gume[0]->tip << endl
		<< this->gume[1]->id << ": " << this->gume[1]->tip << endl
		<< this->gume[2]->id << ": " << this->gume[2]->tip << endl
		<< this->gume[3]->id << ": " << this->gume[3]->tip << endl
		<< endl;
}

Automobil::Automobil()
{
}


Automobil::~Automobil()
{
}

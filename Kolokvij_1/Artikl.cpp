#include "Artikl.h"

double Artikl::ukupnaCijena()
{
	return (this->cijena*this->kolicina);
}
void Artikl::ispis()
{
	cout << this->naziv << " " << this->cijena << " " << this->kolicina << endl;
}

Artikl::Artikl()
{
}

Artikl::Artikl(string _naziv, double _cijena, double _kolicina)
{
	this->naziv = _naziv;
	this->cijena = _cijena;
	this->kolicina = _kolicina;
}

Artikl::~Artikl()
{
}

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Artikl
{
	string naziv;
	double cijena;
	double kolicina;

public:
	double ukupnaCijena();
	void ispis();
	Artikl();
	Artikl(string _naziv, double _cijena, double _kolicina);
	~Artikl();
};


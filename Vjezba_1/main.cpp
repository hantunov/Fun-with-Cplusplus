#include <iostream>
#include <string>
#include <vector>
#include "Automobil.h"
using namespace std;

int main() {

	Automobil *a1 = new Automobil();
	Motor *m1 = new Motor();
	Guma *g1 = new Guma();
	Guma *g2 = new Guma();
	Guma *g3 = new Guma();
	Guma *g4 = new Guma();
	vector<Guma*> gume;

	g1->tip = "zimska";
	g2->tip = "zimska";
	g3->tip = "zimska";
	g4->tip = "zimska";
	g1->id = 1;
	g2->id = 2;
	g3->id = 3;
	g4->id = 4;
	gume.push_back(g1);
	gume.push_back(g2);
	gume.push_back(g3);
	gume.push_back(g4);

	m1->naziv = "V8";
	m1->kubikaza = 2500;
	
	a1->naziv = "Peugeot 407";
	a1->boja = "crvena";
	a1->brVrata = 5;
	a1->ugradiMotor(m1);
	a1->staviGume(gume);
	a1->ispis();

	cout << "\nPritisnite bilo koju tipku za nastavak...";
	getchar();

	a1->izvadiMotor()->kubikaza = 3500;
	for (int i = 0; i < 4; i++) {
		a1->skiniGume()[i]->tip = "ljetna";
	}
	a1->ispis();
	delete a1;

	cout << "\nPritisnite bilo koju tipku za kraj...";
	getchar();
		
	return 0;
}
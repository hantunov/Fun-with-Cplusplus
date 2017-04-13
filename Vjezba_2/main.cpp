#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Automobil.h"
using namespace std;

Automobil *noviAuto();

int main() {

	vector<Automobil*> AutoSalon;	
	int odabir;
	ofstream ispis;
	ispis.open("auti.txt");

	do{

		cout << "1. Upis novog automobila" << endl
			<< "2. Ispis automobila u autosalonu" << endl
			<< "3. Izlaz iz programa" << endl
			<< endl;
		
		cin >> odabir;

		switch (odabir) {
			case 1:
				cin.ignore();
				AutoSalon.push_back(noviAuto());
				cout << endl;
				break;
			case 2:
				cin.ignore();
				if (AutoSalon.size() == 0) {
					cout << "Nema automobila u salonu!" << endl;
					break;
				}
				else {
					for (int i = 0; i < AutoSalon.size(); i++) {
						AutoSalon[i]->ispis();
						AutoSalon[i]->ispisFile(ispis);
					}
				}
				cout << endl;
				break;
			case 3:
				cout << "Dovidjenja!" << endl;
				break;
			default:
				cout << "Potrebno je unijeti broj izmedju 1 i 3. Molim pokusajte ponovno." << endl;
		}

	}while (odabir != 3);
	
	ispis.close();
	return 0;

}

Automobil *noviAuto(){
	
	Automobil *a = new Automobil();
	Motor *m = new Motor();
	Guma *g1 = new Guma();
	Guma *g2 = new Guma();
	Guma *g3 = new Guma();
	Guma *g4 = new Guma();
	vector<Guma*> gume;

	string s = "";
	int br = 0;

	cout << "Unesite podatke za novi automobil: " << endl;
	
	cout << "Marka: ";
	getline(cin, s);
	a->setMarka(s);

	cout << "Tip: ";
	getline(cin, s);
	a->setTip(s);

	cout << "Boja: ";
	getline(cin, s);
	a->boja = s;

	cout << "Broj vrata: ";
	cin >> br;
	a->brVrata = br;
	cin.ignore();

	cout << "Vrsta motora: ";
	getline(cin, s);
	m->naziv = s;

	cout << "Kubikaza: ";
	cin >> br;
	m->kubikaza = br;
	cin.ignore();

	cout << "Vrsta guma: ";
	getline(cin, s);
	g1->tip = s;
	g2->tip = s;
	g3->tip = s;
	g4->tip = s;
	g1->id = 1;
	g2->id = 2;
	g3->id = 3;
	g4->id = 4;
	gume.push_back(g1);
	gume.push_back(g2);
	gume.push_back(g3);
	gume.push_back(g4);

	a->ugradiMotor(m);
	a->staviGume(gume);
	
	return a;
}
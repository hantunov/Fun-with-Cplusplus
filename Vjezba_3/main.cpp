#include <iostream>
#include <string>
#include <vector>
#include "Kompleksni.h"

using namespace std;

Kompleksni* dodajBroj(int i);

int main(){

	vector<Kompleksni*> n;
	int brUnosa;
	Kompleksni *rezultat = new Kompleksni();

	cout << "Koliko kompleksnih brojeva zelite zbrojiti?\n";
	cin >> brUnosa;

	for (int i = 0; i < brUnosa; i++) {
		n.push_back(dodajBroj(i));
		rezultat = rezultat->Add(n[i]);
	}

	for (int i = 0; i < n.size(); i++) {
		cout << i+1 << ". ";
		n[i]->ispis();
	}

	cout << endl << "Suma unesenih brojeva je: ";
	rezultat->ispis();
	
	return 0;
}

Kompleksni* dodajBroj(int i){

	Kompleksni *x = new Kompleksni();
	int unos;

	std::cout << "Unesite realni dio " << i+1 <<". broja: ";
	std::cin >> unos;
	x->setRe(unos);

	std::cout << "Unesite imaginarni dio " << i+1 << ". broja: ";
	std::cin >> unos;
	x->setIm(unos);

	return x;
}



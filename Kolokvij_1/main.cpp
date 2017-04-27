#include <iostream>
#include <string>
#include <vector>
#include "Artikl.h"

using namespace std;

int main(){

	vector<Artikl> artikli = { Artikl("Kruh", 6.45, 3), Artikl("Mlijeko", 6.43, 2), Artikl("Sapun", 7.73, 2), Artikl("Sunka", 65.65, 0.10)};
	Artikl temp;

	cout << "Nesortirano:" << endl;
	
	for (int i = 0; i < artikli.size(); i++){
		artikli[i].ispis();
	}

	for (int i = 0; i < artikli.size(); i++){
		for (int j = i + 1; j < artikli.size(); j++){
			if (artikli[i].ukupnaCijena() < artikli[j].ukupnaCijena()){
				temp = artikli[i];
				artikli[i] = artikli[j];
				artikli[j] = temp;
			}
		}
	}

	cout << "\nSortirano:" << endl;

	for (int i = 0; i < artikli.size(); i++){
		artikli[i].ispis();
	}

	return 0;
}
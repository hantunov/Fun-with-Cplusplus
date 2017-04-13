#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Motor.h"
#include "Guma.h"
using namespace std;

class Automobil
{
private:
	Motor *motor;
	vector<Guma*> gume;
	string marka;
	string tip;
public:
	string boja;
	int brVrata;

	void ugradiMotor(Motor* _m);
	Motor* izvadiMotor();
	void staviGume(vector<Guma*> gume);
	vector<Guma*> skiniGume();
	void setMarka(string _marka);
	string getMarka();
	void setTip(string _tip);
	string getTip();
	void ispis();
	void ispisFile(ofstream &ispis);

	Automobil();
	~Automobil();
};


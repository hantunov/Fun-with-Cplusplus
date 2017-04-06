#pragma once
#include <iostream>
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
public:
	string naziv;
	string boja;
	int brVrata;

	void ugradiMotor(Motor* _m);
	Motor* izvadiMotor();
	void staviGume(vector<Guma*> gume);
	vector<Guma*> skiniGume();
	void ispis();

	Automobil();
	~Automobil();
};


#pragma once
#include <iostream>
#include <math.h>

using namespace std;

class Kompleksni
{
	int re;
	int im;

public:

	//getteri i setteri
	void setRe(int _re);
	int getRe();
	void setIm(int _im);
	int getIm();
	//metode klase
	double Modul();
	void Skalar(int num);
	void Skalar(int numRe, int numIm);
	Kompleksni* Add(Kompleksni *in);
	void ispis();

	Kompleksni();
	~Kompleksni();
};


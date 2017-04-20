#include <iostream>
#include <math.h>
#include "Kompleksni.h"

void Kompleksni::setRe(int _re) {
	this->re = _re;
}
int Kompleksni::getRe() {
	return this->re;
}
void Kompleksni::setIm(int _im) {
	this->im = _im;
}
int Kompleksni::getIm() {
	return this->im;
}
double Kompleksni::Modul() {
	return sqrt((double)((re*re) + (im*im)));
}
void Kompleksni::Skalar(int num) {
	this->re = this->re * num;
	this->im = this->im * num;
}
void Kompleksni::Skalar(int numRe, int numIm) {
	this->re = this->re * numRe;
	this->im = this->im * numIm;
}
Kompleksni* Kompleksni::Add(Kompleksni *in) {

	Kompleksni *suma = new Kompleksni;
	suma->re = this->re + in->re;
	suma->im = this->im + in->im;

	return suma;
}
void Kompleksni::ispis() {
	std::cout << "Z = " << this->re << " + " << this->im << "i, Modul = " << this->Modul() << endl;
}

Kompleksni::Kompleksni() {
	this->re = 0;
	this->im = 0;
}

Kompleksni::~Kompleksni()
{
}
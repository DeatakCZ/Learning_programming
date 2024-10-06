#include "Cukrovi.h"
#include <iostream>
using namespace std;

Cukrovi::Cukrovi(string barva, string tvar , string hmotnost)
{
	this->barva = barva;
	this->tvar = tvar;
	this->hmotnost = hmotnost;
	cout << "Cukrovi barvy " << barva << " tvaru " << tvar << " o hmotnosti " << hmotnost << "." << endl;
}

Cukrovi::~Cukrovi()
{

}


string Cukrovi::getBarva() const
{
	return barva;
}

string Cukrovi::getTvar() const 
{
	return tvar;
}

string Cukrovi::getHmotnost() const 
{
	return hmotnost;
}

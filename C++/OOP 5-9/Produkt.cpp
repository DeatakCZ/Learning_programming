#include "Produkt.h"
#include <iostream>
//#include <>
using namespace std;

Produkt::Produkt()
{
	this->cena = 0;
	this->mnozstvi = 0;
	}

Produkt::~Produkt()
{

}

int Produkt::getCena() const
{
	return cena;
}
int Produkt::getMnozstvi() const
{
	return mnozstvi;
}

void Produkt::setCena(int cena)
{
	this->cena = cena;
}
void Produkt::setMnozstvi(int mnozstvi)
{
	this->mnozstvi = mnozstvi;
}
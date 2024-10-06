#include "Produkt.h"
	
Produkt::Produkt()
{
	this->Jmeno = "";
	this->Cena = 0;
}
Produkt::Produkt(string jmeno, double cena)
{
	this->Jmeno = jmeno;
	this->Cena = cena;
}

double Produkt::getCena() const
{
	return this->Cena;
}
string Produkt::getJmeno() const
{
	return this->Jmeno;
}
bool Produkt::operator<(const Produkt& druhy) const
{
	return this->Jmeno < druhy.Jmeno;
}
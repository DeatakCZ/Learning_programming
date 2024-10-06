#include "Zakaznik.h"




Zakaznik::Zakaznik(string jmeno, string prijmeni, Adresa fakturacni, Adresa dodaci):
	Fakturacni(fakturacni), Dodaci(dodaci)
{
	this->Jmeno = jmeno;
	this->Prijmeni = prijmeni;
}

string Zakaznik::getJmeno() const
{
	return this->Jmeno;
}
string Zakaznik::getPrijmeni() const
{
	return this->Prijmeni;
}
const Adresa& Zakaznik::getDodaci() const
{
	return this->Dodaci;
}
const Adresa& Zakaznik::getFakturacni() const
{
	return this->Fakturacni;
}
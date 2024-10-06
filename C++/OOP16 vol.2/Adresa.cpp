#include "Adresa.h"

Adresa::Adresa(string ulice, string  cp, string mesto,string psc, string stat)
{
	this->Cp = cp;
	this->Mesto = mesto;
	this->Ulice = ulice;
	this->Psc = psc;
	this->Stat = stat;
}

string Adresa::getUlice() const
{
	return this->Ulice;
}

string Adresa::getCp() const
{
	return this->Cp;
}

string Adresa::getMesto() const
{
	return this->Mesto;
}

string Adresa::getPsc() const
{
	return this->Psc;
}

string Adresa::getStat() const
{
	return this->Stat;
}

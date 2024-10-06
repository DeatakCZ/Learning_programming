#include <iostream>
#include "Bojovnik.h"

Bojovnik::Bojovnik(float zivot, float utok, float obrana, Kostka& kostka) 
	: kostka(kostka), zivot(zivot), max_zivot(zivot), utok(utok),obrana(obrana)
{}

Bojovnik& Bojovnik::operator=(const Bojovnik& bojovnik)
{
	if (this == &bojovnik)
		return *this;
	this->zivot = bojovnik.zivot;
	this->obrana = bojovnik.obrana;
	this->utok = bojovnik.utok;
	this->max_zivot = bojovnik.max_zivot;
	return *this;
}

bool Bojovnik::nazivu() const
{
	return this->zivot > 0;
 }

float Bojovnik::utoc(Bojovnik& druhy) const
{
	float obrana_druhy = druhy.obrana + druhy.kostka.hod();
	float utok_prvni = this->utok + this->kostka.hod();
	float zraneni = utok_prvni - obrana_druhy;
	
	if (zraneni < 0)
		zraneni = 0;
	druhy.zivot -= zraneni;

	return zraneni;
}

float Bojovnik::getZivot() const
{
	return this->zivot;
}

float Bojovnik::getMaxZivot() const
{
	return this->max_zivot;
}

float Bojovnik::getUtok() const
{
	return this->utok;
}

float Bojovnik::getObrana() const
{
	return this->obrana;
}

void Bojovnik::setZivot(float zivot)
{
	this->zivot = zivot;
}

float Bojovnik::operator >(Bojovnik& druhy)
{
	return this->utoc(druhy);
}

float Bojovnik::operator<(Bojovnik& druhy)
{
	return druhy.utoc(*this);
}

ostream& operator <<(ostream& str, const Bojovnik& bojovnik)
{
	if (!bojovnik.nazivu())
	{
		str << "mrtev" << endl;
		return str;
	}
	str << "[";
	float pocet_zivotu_procent = bojovnik.getZivot() / bojovnik.getMaxZivot();
	for (double i = 0; i < 1.0; i+=0.1)
		str << (i < pocet_zivotu_procent ? '#' : ' ');
	str << "] (utok: " << bojovnik.getUtok() << ", obrana: " << bojovnik.getObrana() << ")" << endl;
	return str;
}



#include "Mag.h"


Mag::Mag(float zivot, float utok, float obrana, int mana, int magicky_utok, Kostka& kostka) 
	: Bojovnik(zivot, utok, obrana, kostka), mana(mana), max_mana(mana), magicky_utok(magicky_utok)
{
}

float Mag::utoc(Bojovnik& druhy)
{
	if (this->mana == this->max_mana)
	{
		float utok = this->magicky_utok + this->kostka.hod();
		druhy.setZivot(druhy.getZivot()- utok);
		this->mana = 0;
		return utok;
	}
	return Bojovnik::utoc(druhy);
}

void Mag::obnov()
{
	this->mana += 25;
	if (this->mana > this->max_mana)
		this->mana = this->max_mana;
}

int Mag::getMana()
{
	return mana;
}

float Mag::getMagicky_utok()
{
	return magicky_utok;
}
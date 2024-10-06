#include "Zena.h"

Zena::Zena(string jmeno, string prijmeni, string datumNarozeni)
	: Clovek(jmeno, prijmeni, datumNarozeni)
{
}

Clovek* Zena::operator + (const Clovek& druhy) const
{
	return druhy + *this;
}

Clovek* Zena::operator + (const Zena& druhy) const
{
	return NULL;
}

Clovek* Zena::operator + (const Muz& druhy) const
{
	return this->VytvorDite(druhy, *this);
}
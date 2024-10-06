#include "Muz.h"

Muz::Muz(string jmeno, string prijmeni, string datumNarozeni)
	: Clovek(jmeno, prijmeni, datumNarozeni)
{
}

Clovek* Muz::operator + (const Clovek& druhy) const
{
	return druhy + *this;
}

Clovek* Muz::operator + (const Muz& druhy) const
{
	return NULL;
}

Clovek* Muz::operator + (const Zena& druhy) const
{
	return this->VytvorDite(*this, druhy);
}
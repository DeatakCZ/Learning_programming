#include "Kladivo.h"

Kladivo::Kladivo(bool obouruc)
{
	this->obourucni = obouruc;
	if (obouruc)
	{
		this->nazev = "Velke kladivo";
		this->vaha = 10;
	}
	else
	{
		this->nazev = "Male kladivo";
		this->vaha = 5;
	}
}

string Kladivo::pracuj()
{
	return "Zatloukam\n";
}

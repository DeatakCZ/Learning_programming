#include "Ptak.h"

Ptak::Ptak(int vaha, int hlad)
	:hlad(hlad), vaha(vaha)
{
}

void Ptak::snez(int potrava) 
{
	 this->vaha += potrava;
	 this->hlad -= potrava;
}

int Ptak::getHlad() const
{
	return this->hlad;
}

int Ptak::getVaha() const
{
	return this->vaha;
}


ostream& operator <<(ostream& str, const Ptak& ptak)
{
	str << "Jsem ptak s vahou " << ptak.getVaha() << " a hladem " << ptak.getHlad() << endl;
	return str;
}
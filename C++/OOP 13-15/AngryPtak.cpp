#include "AngryPtak.h"



AngryPtak::AngryPtak(int vaha, int hlad, int vztek) :Ptak(vaha, hlad), vztek(vztek)
{
}

void AngryPtak::provokuj(int provokace)
{
	if (this->getHlad() > 50)
		this->vztek += 2 * provokace;
	else
		this->vztek += provokace;
}

int AngryPtak::getVztek() const
{
	return vztek;
}

ostream& operator << (ostream& str, const AngryPtak& angryPtak)
{
	str << "Jsem ptak s vahou " << angryPtak.getVaha() << " a hladem " << angryPtak.getHlad() <<", mira meho vzteku je " <<angryPtak.getVztek() << endl;
	return str;
}

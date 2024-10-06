#include "Clovek.h"


Clovek::Clovek(string jmeno, string prijmeni, string datumNarozeni)
{
	this->jmeno = jmeno;
	this->prijmeni = prijmeni;
	this->datumNarozeni = datumNarozeni;

}


string Clovek::getJmeno() const
{
	return this->jmeno;
}

string Clovek::getPrijmeni() const
{
	return this->prijmeni;
}

string Clovek::getDatumNarozeni() const
{
	return this->datumNarozeni;
}


Clovek* Clovek::VytvorDite(const Muz& otec,const Zena& matka) const
{
	Clovek* Dite = NULL;

		if ((rand() % 100) < 50)
		{
			Dite = new Muz("Adam", otec.prijmeni, "now");
		}
		else
			Dite = new Zena("Eva", matka.prijmeni, "now");
			
		return Dite;
}
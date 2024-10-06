#include "Bedna.h"


Bedna::Bedna(int nosnost)
{
	this->nosnost = nosnost;
	this->vaha = 0;
	this->pocet = 0;
	for (int i = 0; i < 9; i++)
	{
		this->naradi[i] = NULL;
	}
}

void Bedna::vlozitNaradi(Naradi& naradi)
{
	if (naradi.getVaha() <= (this->nosnost - this->vaha))
	{
		this->naradi[this->pocet] = &naradi;
		this->pocet++;
		this->vaha += naradi.getVaha();
	}
	else
		cout << "Moc tezke.\n";
	
}

void Bedna::VyjmoutNaradi(int pozice)
{
	int tmp = this->naradi[pozice]->getVaha();
	this->vaha -= tmp;
	this->pocet--;
	this->naradi[pozice] = NULL;
	for (int i = 0; i < (10 - pozice); i++)
	{
		this->naradi[pozice + i] = this->naradi[pozice + i + 1];
	}
}

void Bedna::Vypis()
{
	cout << "V Bedne je ";
	for (int i = 0; i < this->pocet; i++)
	{
		cout << this->naradi[i]->getNazev();
		if (i+1 < this->pocet)
			cout << ", ";
	}
	cout <<  " a vazi "<<this->vaha<<" kg. \n";
}

void Bedna::PouzitNaradi()
{
	for (int i = 0; i < this->pocet; i++)
	{
		cout<< this->naradi[i]->pracuj();
	}

}
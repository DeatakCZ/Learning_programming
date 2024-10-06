#include "Objednavka.h"

Objednavka::Objednavka(Zakaznik& zakaznik1, Produkt* produkty, int pocet, int cislo) :
	zakaznik(zakaznik1), CisloObjednavky(cislo)
{
	this->produkty = new Produkt[pocet];
	this->pocetProduktu = pocet;

	for (int i = 0; i < pocet; i++)
	{
		this->produkty[i] = produkty[i];
	}

	for (int i = 0; i < pocet; i++)
		for (int j = 1; j < pocet; j++)
			if (this->produkty[j] < this->produkty[j - 1])
			{
				Produkt tmp = this->produkty[j];
				this->produkty[j] = this->produkty[j - 1];
				this->produkty[j - 1] = tmp;
			}
}

Objednavka::~Objednavka()
{
	delete[] produkty;
}

// Order number
int Objednavka::getNumber()
{
	return this->CisloObjednavky;
}


// Customer's first name

string Objednavka::getFirstName()
{
	return this->zakaznik.getJmeno();
}


// Customer's last name

string Objednavka::getLastName()
{
	return this->zakaznik.getPrijmeni();
}


// Facturing informations

string Objednavka::getStreet()
{
	return this->zakaznik.getDodaci().getUlice();
}

string Objednavka::getHouseNumber()
{
	return this->zakaznik.getDodaci().getCp();
}

string Objednavka::getCity()
{
	return this->zakaznik.getDodaci().getMesto();
}

string Objednavka::getZip()
{
	return this->zakaznik.getDodaci().getPsc();
}

string Objednavka::getCountry()
{
	return this->zakaznik.getDodaci().getStat();
}





// Order informations

const string* const Objednavka::Products() 
{
	string* tmp = new string[this->countOfProducts()];
	int pozice = 0;
	tmp[pozice++] = this->produkty[0].getJmeno();

	for (int i = 1; i < this->pocetProduktu; i++)
		if (this->produkty[i - 1].getJmeno() != this->produkty[i].getJmeno())
			tmp[pozice++] = this->produkty[i].getJmeno();
	return tmp;	
}

const int* const  Objednavka::Quantities() 
{
	int* tmp = new int[this->countOfProducts()];
	for (int i = 0; i < this->countOfProducts(); i++)
	{
		tmp[i] = 1;
	}
	int pozice = 0;

	for (int i = 1; i < this->pocetProduktu; i++)
	{
		if (this->produkty[i - 1].getJmeno() != this->produkty[i].getJmeno())
			pozice++;
		else
			tmp[pozice]++;
	}
	return tmp;
}

const double* const  Objednavka::Prices() 
{
	double* tmp = new double[this->countOfProducts()];
	int pozice = 0;

	tmp[pozice++] = this->produkty[0].getCena();

	for (int i = 1; i < this->pocetProduktu; i++)
	{
		if (this->produkty[i - 1].getJmeno() != this->produkty[i].getJmeno())
			tmp[pozice++] = this->produkty[i].getCena();
	}
	return tmp;
}

int Objednavka::countOfProducts() 
{
	int tmp = 1;

	for (int i = 1; i < this->pocetProduktu; i++)
		if (this->produkty[i - 1].getJmeno() != this->produkty[i].getJmeno())
			tmp++;

	return tmp;
}

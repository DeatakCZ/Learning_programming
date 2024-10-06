#include "databaze.h"

void databaze::vypsatSeznam()
{
	for (int i = 0; i < this->pocet; i++)
	{
		cout << i << "- " << vyhledatPolozku(i) << endl;;
	}
}








void databaze::pridatPolozku() 
{
	this->pocet++;
	string text;
	int cena;
	cout << "Zadejte nazev:";
	cin >> text;
	cout << "Zadejte cenu: ";
	cin >> cena;
	polozka tmp(text, cena);
	this->databaze.push_back(tmp);
	cout << endl;
}
void databaze::upravitPolozku(int ID)
{
	odebratPolozku(ID);
	pridatPolozku();
}
void databaze::odebratPolozku(int ID)
{
	this->databaze.erase(this->databaze.begin() + ID);
	this->pocet--;
}

polozka databaze::vyhledatPolozku(int ID)
{
	return this->databaze[ID];
}
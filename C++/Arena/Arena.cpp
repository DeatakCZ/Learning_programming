#include <iostream>
#include <string>
#include "Arena.h"
using namespace std;

Arena::Arena(int pocet_hracu)
{
	this->pocet_hracu = pocet_hracu;
	hraci = new Hrac * [pocet_hracu];
	for(int i = 0; i < pocet_hracu;i++)
	{
		string jmeno;
		cout << "Zadejte jmeno hrace: ";
		cin >> jmeno;
		hraci[i] = new Hrac(jmeno);
	}
}

Arena::~Arena()
{
	for (int i = 0; i < pocet_hracu; i++)
		delete hraci[i];
	delete[] hraci;
	hraci = NULL;
}
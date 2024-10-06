#include "databaze1.h"


void databaze1::nactiSlovo()
{
	cout << "Zadej slovo: ";
	string slovo = "";
	getline(cin, slovo);
	if (slovo == "konec")
	{
		throw konecException();
	}
	else if(slovo =="end")
	{
		throw endException();
	}
	else
	{
		this->zaznamy.push_back(slovo);
		this->pocetSlov++;
	}
}

void databaze1::vypisSeznam()
{
	for (int i = 0; i < (this->zaznamy.size()); i++)
	{
		cout << this->zaznamy[i] << " ";
	}
	cout << endl;
}


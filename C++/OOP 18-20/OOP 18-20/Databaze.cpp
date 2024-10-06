#include "Databaze.h"


void Databaze::nactiSlovo()
{
	cout << "Zadej slovo: ";
	string slovo = "";
	getline(cin, slovo);
	if (slovo == "konec")
	{
		this->konec = true;
	}
	else
	{
		this->zaznamy.push_back(slovo);
		this->pocetSlov++;
	}
}

void Databaze::vypisSeznam()
{
	vector<string> unikatni;
	int pocetSlov = 0;
	bool unikatniSlovo=true;
	for (int i = 0; i < (this->zaznamy.size()); i++)
	{
		for (int o = 0; o < pocetSlov; o++)
		{
			if (this->zaznamy[i] == unikatni[o])
				unikatniSlovo = false;
		}
		if (unikatniSlovo)
		{
			unikatni.push_back(this->zaznamy[i]);
			pocetSlov++;
		}
		unikatniSlovo = true;
	}
	cout << "Pocet unikatnich slov: " << pocetSlov << endl;
	for (int i = 0; i < pocetSlov; i++)
		cout << unikatni[i] << " ";
		





}

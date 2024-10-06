#include <iostream>
#include <string>
#include "Garaz.h"
#include "Automobil.h"
using namespace std;




Garaz::Garaz() 
{
}

Garaz::~Garaz()
{
//	for (int i = 0; i < velikost; i++)
//		delete pole[i];
	delete[] pole;
	pole = NULL;
}

void Garaz::zalozit()
{
	pole = new Automobil*[10];
	kapacita = 10;
	
	help = 1;
}

void Garaz::zapis(Automobil *automobil)
{
	if (pole == NULL)
	{
		zalozit();
		//cout << "Zakladam pole." << endl;
	}
	//if (velikost == kapacita)
	//	zvetsi();
	pole[velikost] = automobil;
	//cout << automobil->predatBarvu() << " auto prave zaparkovalo." << endl;
	velikost++;
}

void Garaz::zvetsi()
{
	
	//Automobil* pole2 = new Automobil[kapacita * 2];
	//kapacita *= 2;
	//for (int i = 0; i < velikost; i++)
	//{
	//	pole2[i] = pole[i];
	//}
//	for (int i = 0; i < velikost; i++)
//		delete pole[i];
	//delete[] pole;
	//pole = pole2;
}

void Garaz::vypis()
{
	for (int i = 0; i < velikost; i++)
	{
		//cout << "cauky";
		cout << "V garazi je " << pole[i]->predatBarvu() << " auto s poznavaci znackou " << pole[i]->predatSPZ() << endl;
	}
}

#include "Automobil.h"
#include <string>
#include <iostream>
#include "Garaz.h"

//Automobil::Automobil() :Automobil("modre", "PEPE123"){}


Automobil::Automobil(string barva, string spz)
{
	this->barva = barva;
	this->spz = spz;
}

Automobil::Automobil()
{

}

Automobil::~Automobil()
{

}


string Automobil::predatBarvu()
{
	return barva;
}

string Automobil::predatSPZ()
{
	return spz;
}

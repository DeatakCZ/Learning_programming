#include<ctime>
#include<cstdlib>
#include "Kostka.h"

using namespace std;

bool Kostka::inicializovano = false;

Kostka::Kostka() : Kostka(6)
{
}

Kostka::Kostka(int pocetSten)
{
	this->pocetSten = pocetSten;
	if (!Kostka::inicializovano)
	{
		srand(time(NULL));
		inicializovano = true;
	}
}


int Kostka::hod()
{
	return rand() % this->pocetSten + 1;
}

int Kostka::getPocetSten() const
{
	return this->pocetSten;
}
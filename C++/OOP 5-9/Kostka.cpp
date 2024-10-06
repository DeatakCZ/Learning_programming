#include "Kostka.h"
#include <ctime>
#include <cstdlib>

bool Kostka::inicializovano = false;


Kostka::Kostka(int pocet_sten)
{
	this->pocet_sten = pocet_sten;
	if (!inicializovano)
		srand((unsigned int)time(NULL));
	inicializovano = true;
}

int Kostka::Hod()
{
	return (rand() & pocet_sten-1)+1;
}
#include "Pocitadlo.h"

int Pocitadlo::pocetInstanci = 0;

Pocitadlo::Pocitadlo()
{
	pocetInstanci++;
}

Pocitadlo::~Pocitadlo()
{
	pocetInstanci--;
}

int Pocitadlo::ziskejPocetInstanci()
{
	return pocetInstanci;
}

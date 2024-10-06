#include "ElektrickySroubovak.h"


ElektrickySroubovak::ElektrickySroubovak(int kapacita)
{
	this->nazev = "sroubovak Philips elektricky";
	this->vaha = 2;
	this->kapacita = kapacita;
}


string ElektrickySroubovak::pracuj()
{
	return "sroubuji elektricky\n";
}

#include "Obdelnik.h"





Obdelnik::Obdelnik(string barva, int sirka, int vyska)
	: Tvar(barva), sirka(sirka), vyska(vyska)
{
}

double Obdelnik::obsah()
{
	return this->sirka * this->vyska;
}
#ifndef __OBDELNIK_H__
#define __OBDELNIK_H__

#include "Tvar.h"


class Obdelnik : public Tvar
{
private:
	int sirka;
	int vyska;

public:
	Obdelnik(string barva, int sirka, int vyska);
	double obsah();
};


#endif
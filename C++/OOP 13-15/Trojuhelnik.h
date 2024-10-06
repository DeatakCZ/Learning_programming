#ifndef __TROJUHELNIK_H__
#define __TROJUHELNIK_H__

#include "Tvar.h"

class Trojuhelnik : public Tvar
{
private:
	int a;
	int b;
	int c;
	 
public:
	Trojuhelnik(string barva, int a, int b, int c);
	double obsah();

};

#endif
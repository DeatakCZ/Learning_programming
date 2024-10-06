#ifndef __TOVARNA_H__
#define __TOVARNA_H__

#include"Cukrovi.h"

class Tovarna
{
public:
	Tovarna();
	~Tovarna();
	static Cukrovi* Vygeneruj(string barva, string tvar, string hmotnost);
};


#endif 
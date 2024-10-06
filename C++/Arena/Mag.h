#ifndef __MAG_H__
#define __MAG_H__

#include "Bojovnik.h"

class Mag : public Bojovnik
{
private:
	int mana;
	int max_mana;
public:
	Mag(float zivot, float utok, float obrana, int mana, int magicky_utok, Kostka& kostka);
	float magicky_utok;
	int getMana();
	float getMagicky_utok();
	void obnov();
	float utoc(Bojovnik& druhy);
};



#endif

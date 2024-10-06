#ifndef __ARENA_H__
#define __ARENA_H__

#include "Hrac.h"

class Arena
{
public:
	Hrac** hraci;
	int pocet_hracu;
	Arena(int pocet_hracu);
	~Arena();
};




#endif


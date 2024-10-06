#ifndef __DYNAMICKEPOLE_H__
#define __DYNAMICKEPOLE_H__
#include <iostream>
#include <string>
#include "DynamickePole.h"

using namespace std;

class DynamickePole
{
public:
	int* pole = NULL;
	int kapacita = 0;
	int velikost = 0;
	void pridat(int cislo);
	void vypsat(void);
	void zvetsit(void);
	DynamickePole();
	~DynamickePole();
};


#endif

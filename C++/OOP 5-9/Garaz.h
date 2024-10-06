#ifndef __GARAZ_H__
#define __GARAZ_H__

#include <iostream>
#include <string>
using namespace std;
#include "Automobil.h"


class Garaz
{
public:

	Automobil** pole =NULL;
	Garaz();
	~Garaz();
	void vypis();
	void zapis(Automobil* automobil);
private:
	int kapacita = 0;
	int velikost = 0;
	void zalozit();
	void zvetsi();
	int help = 0;
};


#endif

#ifndef __PTAK_H__
#define __PTAK_H__

#include <iostream>

using namespace std;

class Ptak
{
protected:
	int hlad;
	int vaha;

public:
	Ptak(int vaha, int hlad);
	void snez(int potrava);

	int getHlad() const;
	int getVaha() const;

};

ostream& operator<<(ostream& str, const Ptak& ptak);

#endif
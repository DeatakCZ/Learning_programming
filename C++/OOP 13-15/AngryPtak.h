#ifndef __ANGRYPTAK_H__
#define __ANGRYPTAK_H__

#include "Ptak.h"

class AngryPtak : public Ptak
{
protected:
	int vztek;

public:
	AngryPtak(int vaha, int hlad, int vztek);
	void provokuj(int provokace);
	int getVztek() const;
};

ostream& operator << (ostream& str, const AngryPtak& angryPtak);

#endif

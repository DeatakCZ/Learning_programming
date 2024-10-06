#ifndef __POLE_H__
#define __POLE_H__

#include <iostream>
#include <string>


using namespace std;

class Pole
{
public:
	Pole();
	Pole(const Pole& Pole);
	Pole(int* pole, int velikost);
	~Pole();

	int* pole = NULL;

	void pridej(int cislo);
	Pole operator +(Pole& pole);
	int velikost = 0;
};

ostream & operator<<(ostream& str,const Pole& pole);

#endif

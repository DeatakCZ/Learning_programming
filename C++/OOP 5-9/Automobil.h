#ifndef __AUTOMOBIL_H__
#define __AUTOMOBIL_H__

#include <string>
using namespace std;



class Automobil
{
public:
	Automobil();
	Automobil(string barva, string spz);
	~Automobil();
	string predatBarvu();
	string predatSPZ();
private:
	string spz;
	string barva;
};



#endif
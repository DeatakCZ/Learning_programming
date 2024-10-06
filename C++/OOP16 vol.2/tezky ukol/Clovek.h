#pragma once

#include <string>


using namespace std;


class Muz;
class Zena;

class Clovek
{
private:
	string jmeno;
	string prijmeni;
	string datumNarozeni;


public:
	Clovek(string jmeno, string prijmeni, string datumNarozeni);

	string getJmeno() const;
	string getPrijmeni() const;
	string getDatumNarozeni() const;

	virtual Clovek* operator + (const Clovek& druhy)const =0;
	virtual Clovek* operator + (const Muz& druhy)const =0;
	virtual Clovek* operator + (const Zena& druhy)const =0;

	Clovek* VytvorDite(const Muz& otec,const Zena& matka) const;
};


#include "Muz.h"
#include "Zena.h"

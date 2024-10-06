#ifndef __BOJOVNIK_H__
#define __BOJOVNIK_H__

#include "Kostka.h"
#include<string>

using namespace std;

class Bojovnik
{
private:
	float zivot;
	float max_zivot;
	float utok;
	float obrana;

protected:
	Kostka& kostka;

public:
	Bojovnik() = delete;
	Bojovnik(float zivot, float utok, float obrana, Kostka &kostka);
	Bojovnik(const Bojovnik& bojovnik) = default;
	~Bojovnik() = default;
	Bojovnik& operator = (const Bojovnik& bojovnik);
	bool nazivu()const;
	float utoc(Bojovnik& druhy) const;
	float getZivot()const;
	float getMaxZivot() const;
	float getUtok() const;
	float getObrana() const;
	void setZivot(float zivot);
	float operator > (Bojovnik& druhy);
	float operator < (Bojovnik& druhy);
};

ostream& operator << (ostream& str, const Bojovnik& bojovnik);

#endif
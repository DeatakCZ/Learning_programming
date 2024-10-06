#ifndef __PREVODNIK_H__
#define __PREVODNIK_H__



class Prevodnik
{
public:
	Prevodnik();
	~Prevodnik();
	double StupneNaRadiany(double stupne);
	double RadianyNaStupne(double radiany);
	static double Pi;
};

#endif
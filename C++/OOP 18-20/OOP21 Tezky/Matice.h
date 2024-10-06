#pragma once
#include<iostream>
#include "RuzneVelkeMaticeException.h"


class Matice
{



	
	int pocetRadku;
	int pocetSloupcu;
	double* pole;
public:
	double najdi(int y, int x) const;

	int ZiskejPocetRadku() const;
	int ZiskejPocetSloupcu() const;


	Matice(const Matice& a);
	Matice(double* pole, int pocetSloupcu, int pocetRadku );
	~Matice();

	Matice operator +(const  Matice& a) const;
	Matice operator -(const  Matice& a) const;
	Matice operator -() const;
	Matice operator *(const  Matice& a) const;

};
ostream& operator <<(ostream& str, const Matice& a);






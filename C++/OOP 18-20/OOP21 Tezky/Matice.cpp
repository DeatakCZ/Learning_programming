#include "Matice.h"
#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;


Matice::Matice(double* pole, int pocetSloupcu, int pocetRadku ):pole(NULL), pocetRadku(pocetRadku),pocetSloupcu(pocetSloupcu)
{
	this->pole = new double[pocetRadku * pocetSloupcu];
	for (int i = 0; i < pocetRadku * pocetSloupcu; i++)
		this->pole[i] = pole[i];
}
Matice::Matice(const Matice& a) : Matice(a.pole, a.pocetSloupcu, a.pocetRadku)
{
}

Matice::~Matice()
{
	delete[] this->pole;
}


double Matice::najdi(int y, int x) const
{
	return this->pole[y * pocetSloupcu + x];
}



int Matice::ZiskejPocetRadku() const
{
	return this->pocetRadku;
}
int Matice::ZiskejPocetSloupcu() const
{
	return this->pocetSloupcu;
}




Matice Matice::operator+(const Matice& a) const
{
	if (this->pocetRadku != a.pocetRadku || this->pocetSloupcu != a.pocetSloupcu)
		throw RuzneVelkeMaticeException();
	double* tmp = new double[this->pocetRadku * this->pocetSloupcu];

	for (int i = 0; i < a.pocetSloupcu * a.pocetRadku; i++)
	{
		tmp[i] = this->pole[i] + a.pole[i];
	}

	Matice vratkaSoucet(tmp, a.pocetSloupcu, a.pocetRadku);
	delete[]tmp;
	return vratkaSoucet;
}


/*
Matice Matice::operator-(const Matice& a) const
{
	if (this->pocetRadku != a.pocetRadku || this->pocetSloupcu != a.pocetSloupcu)
		throw RuzneVelkeMaticeException();
	double* tmp = new double[this->pocetRadku * this->pocetSloupcu];

	for (int i = 0; i < int(sizeof(this->pole)); i++)
	{
		tmp[i] = this->pole[i] - a.pole[i];
	}

	Matice vratka(tmp, a.ZiskejPocetRadku(), a.ZiskejPocetSloupcu());
	delete[] tmp;

	return vratka;*/
Matice Matice::operator-() const
{
	Matice minusova(this->pole, this->pocetSloupcu, this->pocetRadku );

	for (int i = 0; i < this->pocetRadku * this->pocetSloupcu; i++)
		minusova.pole[i] = (-minusova.pole[i]);

	return minusova;
}


Matice Matice::operator-(const Matice& a) const
{
	return *this + (-a);
}


Matice Matice::operator*(const Matice& a) const
{
	if (this->pocetRadku != a.pocetSloupcu)
		throw RuzneVelkeMaticeException();

	int sirka = a.pocetRadku;
	int vyska = this->pocetSloupcu;
	double* tmp1 = new double[vyska * sirka];

	for (int t = 0; t < vyska; t++)
		for (int y = 0; y < sirka; y++)
		{
			tmp1[t * sirka + y] = 0;
			for (int i = 0; i < this->pocetRadku; i++)
				tmp1[t * sirka + y] += this->najdi(t, i) * a.najdi(i, y);
		}
	
	Matice vratkaNasobeni(tmp1, vyska, sirka);
	delete[] tmp1;
	return vratkaNasobeni;
}



std::ostream& operator<<(std::ostream& str, const Matice& a)
{

	for (int y = 0; y < a.ZiskejPocetRadku(); y++)
	{
		for (int i = 0; i < a.ZiskejPocetSloupcu(); i++)
		{
			str << a.najdi(y, i) << " ";
		}
		str << "\n";
	}
	return str;
}


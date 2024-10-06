#define _USE_MATH_DEFINES

#include "Prevodnik.h"
#include <cmath>
#include <iostream>

using namespace std;


Prevodnik::Prevodnik()
{

}

Prevodnik::~Prevodnik()
{

}

double Prevodnik::StupneNaRadiany(double stupne)
{
	cout << stupne << " stupnu je " << (stupne * Pi) / 180 << " radianu" << endl;
	return (stupne * Pi) / 180;
}

double Prevodnik::RadianyNaStupne(double radiany)
{
	cout << radiany << " radianu je " << (radiany * 180) / Pi << " stupnu" << endl;
	return (radiany * 180) / Pi;
}

double Prevodnik::Pi = M_PI;
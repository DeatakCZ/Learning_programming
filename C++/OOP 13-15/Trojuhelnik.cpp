#include "Trojuhelnik.h"
#include<cmath>
#include <iostream>
using namespace std;


Trojuhelnik::Trojuhelnik(string barva, int a, int b, int c)
	:Tvar(barva),a(a),b(b),c(c)
{
}

double Trojuhelnik::obsah()
{
	double s = double(this->a + this->b + this->c) / 2;

	double S = sqrt(s * (s - this->a) * (s - this->b) * (s - this->c));

	return S;
}
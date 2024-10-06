#pragma once
#include <string>
using namespace std;

class Produkt
{
private:
	string Jmeno;
	double Cena;
public:
	Produkt();
	Produkt(string jmeno, double cena);
	string getJmeno() const;
	double getCena() const;
	bool operator <(const Produkt& druhy) const;

};


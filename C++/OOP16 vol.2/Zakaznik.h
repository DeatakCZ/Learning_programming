#pragma once
#include <string>
using namespace std;
#include "Adresa.h"


class Zakaznik
{
private:
	string Jmeno;
	string Prijmeni;
	Adresa Fakturacni;
	Adresa Dodaci;

public:
	Zakaznik(string jmeno, string prijmeni, Adresa fakturacni, Adresa dodaci);
	string getJmeno() const;
	string getPrijmeni() const;
	const Adresa& getDodaci() const;
	const Adresa& getFakturacni() const;


};


#pragma once
#include <string>
using namespace std;

class Adresa
{
private:
	string Ulice;
	string Cp;
	string Mesto;
	string Psc;
	string Stat;
public:
	Adresa(string ulice,string cp, string mesto, string psc, string stat);
	string getUlice() const;
	string getCp() const;
	string getMesto() const;
	string getPsc() const;
	string getStat() const;


};


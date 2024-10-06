#pragma once
#include <iostream>
#include <string>

using namespace std;

class polozka
{
private:
	string jmeno;
	int cena;
public:
	polozka();
	polozka(string jmeno, int cena);
	string ziskejJmeno() const;
	int ziskejCenu() const;
};

ostream& operator<< (ostream& str, const polozka& s);
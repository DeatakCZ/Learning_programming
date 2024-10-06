#include "polozka.h"


polozka::polozka() :polozka("", 0)
{

}


polozka::polozka(string jmeno, int cena) : jmeno(jmeno), cena(cena)
{

}

ostream & operator<< (ostream& str, const polozka& s)
{
	str << "Jmeno: " << s.ziskejJmeno() << endl;
	str << "Cena: " << s.ziskejCenu() << endl;


	return str;
}

string polozka::ziskejJmeno() const
{
	return this->jmeno;
}
int polozka::ziskejCenu() const
{
	return this->cena;
}
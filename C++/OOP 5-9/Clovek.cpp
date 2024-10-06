#include "Clovek.h"

#include <iostream>
#include<string>
using namespace std;



Clovek::Clovek() : Clovek("Pepa" , "Horak" , 50)
{
}

Clovek::Clovek(string jmeno, string prijmeni, int vek)
{
	this->jmeno = jmeno;
	this->prijmeni = prijmeni;
	this->vek = vek;
}

Clovek::~Clovek()
{

}

void Clovek::vypis()
{
	cout << "Me jmeno je " << jmeno << " " << prijmeni << " a je mi " << vek << " let."<<endl;
}

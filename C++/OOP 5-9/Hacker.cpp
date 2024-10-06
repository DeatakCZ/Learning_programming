#include "Hacker.h"
#include<iostream>
#include <string>

Hacker::Hacker():Hacker("heslo1")
{
}

Hacker::Hacker(string heslo)
{
	this->heslo = heslo;
}

Hacker::~Hacker()
{

}

void Hacker::login(string heslo)
{
	if (this->heslo == heslo)
		cout << "Hacker prihlasen"<<endl;
	else
		cout << "Spatne heslo"<<endl;
}

void Hacker::hackuj(Hacker *cil)
{
	cil->heslo = this->heslo;
}
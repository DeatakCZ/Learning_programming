#include "Komplexni.h"
#include <iostream>
#include <string>

using namespace std;

Komplexni::Komplexni() : Komplexni(0, 0)
{
}

Komplexni::Komplexni(double realnaS, double imaginarniS)
{
	this->r = realnaS;
	this->i = imaginarniS;
}


void Komplexni::setR(double cislo)
{
	this->r = cislo;
}

void Komplexni::setI(double cislo)
{
	this->i = cislo;
}

double Komplexni::getR() const
{
	return this->r;
}

double Komplexni::getI() const
{
	return this->i;
}




Komplexni Komplexni::operator+(Komplexni& b) const
{
	Komplexni c;
	c.r = this->r + b.r;
	c.i = this->i + b.i;
	return c;
}
Komplexni Komplexni::operator-(Komplexni& b) const
{
	Komplexni c;
	c.r = this->r - b.r;
	c.i = this->i - b.i;
	return c;
}
Komplexni Komplexni::operator*(Komplexni& b) const
{
	Komplexni c;
	c.r = (this->r * b.r) - (this->i * b.i);
	c.i = (this->r * b.i)+(this->i*b.r);
	return c;
}

Komplexni Komplexni::operator/(Komplexni& b) const
{
	Komplexni c;
	c.r = (this->r * b.r + this->i * b.i) / (b.r * b.r + b.i * b.i);
	c.i = (this->i * b.r - this->r * b.i) / (b.r * b.r + b.i * b.i);
	return c;
}

ostream& operator <<(ostream& str, const Komplexni& komplexni)
{
	str << komplexni.getR() << ((komplexni.getI()>0)?"+":"") << komplexni.getI() << "i";
	return str;
}
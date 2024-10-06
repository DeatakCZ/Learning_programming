#ifndef __KOMPLEXNI_H__
#define __KOMPLEXNI_H__

#include <string>

using namespace std;

class Komplexni
{
public:
	Komplexni();
	Komplexni(double realnaS, double imaginarniS);
	

	double getR() const;
	double getI() const;
	void setR(double cislo);
	void setI(double cislo);
	Komplexni operator +(Komplexni& b) const;
	Komplexni operator -(Komplexni& b) const;
	Komplexni operator *(Komplexni& b) const;
	Komplexni operator /(Komplexni& b) const;
private:
	double r;
	double i;
};

ostream& operator << (ostream& str, const Komplexni& komplexni);

#endif 
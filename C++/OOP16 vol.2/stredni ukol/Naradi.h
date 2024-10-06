#pragma once
#include <string>
using namespace std;


class Naradi
{
protected:
	int vaha;
	string nazev;
	Naradi();
public:
	virtual string pracuj() = 0;
	string getNazev();
	int getVaha();
};


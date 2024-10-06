#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "endException.h"
#include "konecException.h"


using namespace std;

class databaze1
{
private:
	vector<string> zaznamy;
	int pocetSlov;
public:
	bool konec = true;

	void nactiSlovo();
	void vypisSeznam();

};


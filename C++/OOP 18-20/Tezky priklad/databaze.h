#pragma once
#include <iostream>
#include <vector>
#include "polozka.h"

class databaze
{
private:
	vector<polozka> databaze;
	int pocet;
public:
	void vypsatSeznam();
	void pridatPolozku();
	void upravitPolozku(int ID);
	void odebratPolozku(int ID);
	polozka vyhledatPolozku(int ID);

};


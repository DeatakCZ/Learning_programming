#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Databaze
{
private:
	vector<string> zaznamy;
	int pocetSlov;
public:
	bool konec = false;

	void nactiSlovo();
	void vypisSeznam();

};


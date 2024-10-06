#include "Ceckar.h"
#include <iostream>

using namespace std;

Ceckar::Ceckar(string jmeno, string IDE) : Clovek(jmeno), IDE(IDE)
{
}

void Ceckar::programuj(int radky)
{
	if (this->unava - (radky / 10) < 0)
	{
		cout << "Jsem prilis unaveny,abych programoval" << endl;
		return;
	}
	unava -= radky / 10;
	cout << "Naprogramoval jsem " << radky << " radku" << endl;
}

string Ceckar::getIDE() const
{
	return this->IDE;
}

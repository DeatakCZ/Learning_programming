#include <iostream>
#include "kostka.h"
#include "Mag.h"

using namespace std;

int main()
{
	Kostka kostka1;
	Mag prvni(100, 3, 1, 100, 30, kostka1);
	Mag druhy(100, 3, 1, 100, 30, kostka1);

	while (prvni.nazivu() && druhy.nazivu())
	{
		cout << "Prvni utoci: " << prvni.utoc(druhy) << endl;
		if (druhy.nazivu())
			cout << "Druhy utoci: " << druhy.utoc(prvni) << endl;
		prvni.obnov();
		druhy.obnov();
	}


	if (prvni.nazivu())
		cout << "Prvni mag vyhral souboj";
	else
		cout << "Druhy mag vyhral souboj";








	return 0;
}
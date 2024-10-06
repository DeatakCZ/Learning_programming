/*

#include <iostream>
#include <string>
#include "Clovek.h"

using namespace std;


int main()
{
	Clovek clovek;
	
	clovek.beh(10);
	clovek.beh(10);
	clovek.beh(10);
	clovek.spanek(15);
	clovek.beh(10);
	clovek.spanek(16);


	return 0;
}

*/
/*


#include<iostream>
#include<string>
#include"Generator.h"
using namespace std;

int main()
{
	Generator generator;
	for (int i = 0; i < 10; i++)
	{
		generator.prvniSlovo();
		generator.druheSlovo();
		generator.tretiSlovo();
		generator.ctvrteSlovo();
		generator.pateSlovo();
		cout << endl;
	}
}

*/
/*

Naprogramujte třídu, která bude sloužit jako dynamické pole pro celá čísla. Svým způsobem se jedná o implementaci z tutoriálu dynamická alokace polí.
Důležité je, aby bylo pole vytvořeno v konstruktoru a naopak v destruktoru bylo pole smazáno. Třída kromě toho bude schopná vypsat uložené čísla.

Ukázka obrazovky programu:

Vkladam prvek 0
Vkladam prvek 1
Vkladam prvek 2
Vkladam prvek 3
Vkladam prvek 4
Vkladam prvek 5
0 1 2 3 4 5
Vkladam prvek 0
Vkladam prvek 4
Vkladam prvek 8
0 1 2 3 4 5 0 4 8


*/
/*


#include "DynamickePole.h"



int main()
{
	DynamickePole dynPole;
	dynPole.pridat(0);
	dynPole.pridat(1);
	dynPole.pridat(2);
	dynPole.pridat(3);
	dynPole.pridat(4);
	dynPole.pridat(5);
	dynPole.vypsat();
	dynPole.pridat(0);
	dynPole.pridat(4);
	dynPole.pridat(8);
	dynPole.vypsat();
	
	cin.get(); cin.get();
	
	return 0;

}

*/
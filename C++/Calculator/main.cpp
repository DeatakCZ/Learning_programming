/*


Vytvořte třídu Kalkulacka, jejíž atributy jsou dvě čísla. Třídě vytvořte metody pro základní početní operace (sčítání, odčítání, násobení, dělení),
které vracejí vždy výsledek dané operace s atributy třídy. V praxi by metody samozřejmě dělaly nějaké složitější výpočty, ale nám to takto stačí. 
Nechte uživatele zadat oba atributy, vytvořte instanci kalkulačky, nastavte jí atributy od uživatele a vypište výsledky jednotlivých operací.

Ukázka obrazovky programu:

Zadejte 1. cislo: 15.2
Zadejte 2. cislo: 22.7
Soucet: 37.9
Rozdil: -7.5
Soucin: 345.04
Podil: 0.669604


*/
/*


#include<iostream>
using namespace std;

#include "kalkulacka.h"


int main()
{
	
	
	Kalkulacka kalkulacka;
	cout << "Zadejte 1. cislo: ";
	cin >> kalkulacka.a;
	cout << "Zadejte 2. cislo: ";
	cin >> kalkulacka.b;


	cout << "Soucet: " << kalkulacka.soucet() << endl;
	cout << "Rozdil: " << kalkulacka.rozdil() << endl;
	cout << "Soucin: " << kalkulacka.soucin() << endl;
	cout << "Podil: " << kalkulacka.podil() << endl;


	return 0;
}


*/
/*


S použitím objektově orientovaného programování vytvořte aplikaci, ve které figuruje nákladní auto, které převáží písek.
Toto auto má nosnost 3 tuny a jeho náklad je zpočátku prázdný.

Nechte auto postupně:

naložit 10 tun
naložit 500 kg
vyložit 300 kg
vyložit 1 tunu
Jak asi tušíte, naložení a vyložení nákladu bude probíhat pomocí metod, které si před změnou váhy nákladu nejprve ověří,
zda je v autě dost místa nebo zda nevykládáme více, než je naloženo. V případě chyby se náklad nevloží/nevyloží.

Po dokončení nakládání a vykládání nechte vypsat kolik je v autě kg nákladu, mělo by vám vyjít 200 kg.

Ukázka obrazovky programu:

V nakladnim aute je nalozeno 200 kg


*/
/*

#include <iostream>
#include "Auto.h"

using namespace std;

int main()
{
	Auto tatra;

	tatra.nalozit(10000);

	tatra.nalozit(500);

	tatra.vylozit(300);

	tatra.vylozit(1000);

	cout << "V nakladnim aute je nalozeno " << tatra.naklad << " kg" << endl;
	return 0;
}


*/
/*


Vytvořte aplikaci, evidující dva lidi. Každý člověk má jméno, věk a přítele.
Každý člověk se také umí představit a to tak, že vypíše své jméno, věk a jméno svého kamaráda.
Vytvořte v aplikaci 2 lidi, kteří se navzájem kamarádí, a nechte je se představit.

Ukázka obrazovky programu:

Ahoj, ja jsem Karel Novak, je mi 33 a muj kamarad je Pavel Novy
Ahoj, ja jsem Pavel Novy, je mi 23 a muj kamarad je Karel Novak


*/


#include <iostream>
#include <string>
#include "seznamka.h"

using namespace std;


int main()
{

	seznamka Karel;
	seznamka Pavel;
	Karel.jmeno = "Karel Novak";
	Pavel.jmeno = "Pavel Novy";

	Karel.vek = 33;
	Pavel.vek = 23;


	Karel.pritel = &Pavel.jmeno;

	Pavel.pritel = &Karel.jmeno;

	Karel.vypis();
	Pavel.vypis();
	
	cin.get();
	return 0;
}
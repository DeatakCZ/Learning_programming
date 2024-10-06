/*


V aplikaci vytvořte třídu Ptak s atributy:

hlad = 100 jednotek
vaha = 50 gramů
Třídě dodejte virtuální metodu snez(), která přijímá kolik gramů potravy má pták sníst. Váha ptáka se po snědení potravy zvýší o váhu potravy a hlad se o toto množství sníží.

Následně přidejte třídu AngryPtak, který ptáka rozšiřuje o atribut vztek a metodu provokuj(). Tato metoda přijímá jako parametr míru provokace, která zvýší vztek ptáka. Pokud je pták hladový, naštve se 2x rychleji (přičte se mu tedy dvojnásobek míry provokace, než kolik bylo metodě předáno).

Ukázka obrazovky programu:

Konzolová aplikaceJsem ptak s vahou 50 a hladem 100
Jsem ptak s vahou 70 a hladem 80
Jsem ptak s vahou 50 a hladem 100, mira meho vzteku je 0
Jsem ptak s vahou 50 a hladem 100, mira meho vzteku je 10
Jsem ptak s vahou 150 a hladem 0, mira meho vzteku je 15


*/
/*


#include "Ptak.h"
#include "AngryPtak.h"


int main()
{
	Ptak ptak(50, 100);
	cout << ptak;
	ptak.snez(20);
	cout << ptak;
	AngryPtak ptak2(50, 100, 0);
	cout << ptak2;

	ptak2.provokuj(5);
	cout << ptak2;
	ptak2.snez(100);
	ptak2.provokuj(5);
	cout << ptak2;

	return 0;
}

*/
/*


Třídu Clovek poděďte ve třídě Ceckar. Ceckar člověka rozšiřuje o atribut IDE, kde je uložen název vývojového prostředí, ve kterém programuje.
Atribut se zadává spolu s dalšími atributy céčkaře v konstruktoru.
Ceckar dále disponuje metodou programuj(), která přijímá v parametru počet řádků, které má napsat.
Za každých 10 řádku přidejte jednotku únavy a zároveň únavu nenechte vzrůst nad 20 jednotek.
V případě příliš vysoké únavy metoda vypíše "Jsem příliš unavený, abych programoval".

Céčkař nechte různě běhat, spát a pracovat, abyste ho vyzkoušeli.

Ukázka obrazovky programu:

Clovek Karel vytvoren
Ubehl jsem 5 km
Nepotrebuji spat
Naprogramoval jsem 100 radku
Jsem prilis unaveny, abych programoval
Ubehl jsem 5 km
Jsem prilis unaveny


Třídu musíte drobně upravit, aby bylo rozšíření možné. Protože jsme již zběhlí programátoři, nezapomeňte použít správné modifikátory přístupu. 
Také nezapomeňte zavolat konstruktor předka.


*/
/*

#include "Clovek.h"
#include "Ceckar.h"


int main()
{
	Ceckar clovek("Karel", "VS");
	clovek.behej(5);
	clovek.spi(20);
	clovek.programuj(100);
	clovek.programuj(100);
	clovek.behej(5);
	clovek.behej(5);

	

	return 0;
}


*/
/*


Vytvořte třídu Tvar, která slouží jako předek pro všechny geometrické útvary a která definuje jejich společné vlastnosti.
Všechny tvary mají nějakou barvu (string), kterou lze nastavit konstruktorem.

Od této třídy následně odvoďte třídy Trojuhelnik a Obdelnik, které budou schopny spočítat svůj obsah.
Hierarchie tříd je znázorněna následujícím UML diagramem:

UML diagram
K výpočtu obsahu trojúhelníku využijte Heronova vzorce.

Heronův vzorec umožňuje vypočítat obsah libovolného trojúhelníku pomocí délek jeho stran. Při výpočtu nejprve spočítáme s (malé es).
Celkový obsah spočítáme pomocí tohoto s a to takto:

Heronův vzorec
S využitím těchto tříd vypočítejte obsah tohoto obrazce:

Cvičení k OOP v C++ – Strom
Ukázka obrazovky programu:

Obsah obrazce je 492.578 cm^2

Třídu Tvar by bylo vhodné označit jako abstraktní, aby jazyk chápal, že slouží pouze k dědění a nemá od ní smysl vytvářet instanci
(vytvořit obecný tvar nedává smysl). Jak to udělat se dozvíte dále v C++ kurzu.

*/
/*

#include "Tvar.h"
#include "Trojuhelnik.h"
#include "Obdelnik.h"

#include <iostream>
using namespace std;

int main()
{
	Trojuhelnik tvar1("Zeleny", 15, 15, 25);
	Obdelnik tvar2("Cerveny", 3, 26);
	

	cout << "Obsah trojuhelniku je " << tvar1.obsah() << "cm^2" << endl;
	cout << "Obsah obrazce je " << 4 * (tvar1.obsah()) + tvar2.obsah() << "cm^2" << endl;



	return 0;
}

*/
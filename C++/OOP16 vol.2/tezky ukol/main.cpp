/*Pokročilý příklad 

Vytvořte aplikaci, ve které figurují třídy Clovek, který
je abstraktním předkem pro třídy Muz a Zena.
Člověk má atributy jmeno, prijmeni a
datumNarozeni. Jelikož nás datum a čas v kurzu teprve čekají,
ukládejte jej pouze jako string.

Člověku přetižte operátor + tak, aby se sečtením dvou
lidí opačného pohlaví získal nový člověk (dítě). Nový člověk bude
buď Muz nebo Zena, to náhodně vylosujte s
pravděpodobností 50:50. Noví muži dostanou jméno "Adam", ženy
"Eva" a příjmení po otci, resp. matce. Jako datum narození
dětem nastavte řetězec "now". Při sečtení lidí stejného
pohlaví získáme hodnotu NULL.

Ukázka obrazovky programu:

Konzolová aplikace
Jan Novy a Pavla Stara spolu maji dite Adam Novy
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Clovek.h"
#include "Muz.h"
#include "Zena.h"

int main()
{
	srand(time(0));

	Clovek* jan = new Muz("Jan", "Novy", "12.3.1984");
	Clovek* pavla = new Zena("Pavla", "Stara", "18.9.1987");

	Clovek* dite = *jan + *pavla;

	cout << jan->getJmeno() << " " << jan->getPrijmeni()
		<< " a " << pavla->getJmeno() << " " << pavla->getPrijmeni()
		<< " spolu maji dite "
		<< dite->getJmeno() << " " << dite->getPrijmeni() << endl;

	cin.get();
}
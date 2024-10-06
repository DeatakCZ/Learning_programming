/*


Pokročilý příklad

V pokročilém příkladu si vytvoříme takový malý interaktivní
obchůdek. Program bude zaznamenávat produkty na prodejně. Produkty půjdu
vypsat, přidat, změnit a odebrat. Jednotlivé produkty uchovávejte ve
třídě vector.

Konzolová aplikace
Vitejte v eshopu
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
2
Zadejte nazev: Nejaky mobil
Zadejte cenu: 5000
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
2
Zadejte nazev: Poitac
Zadejte cenu: 25000
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
1
2-Nejaky mobil
3-Poitac
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
3
Zadejte id: 4
Neplatne id
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
3
Zadejte id: 3
Zadejte nazev: Pocitac HP
Zadejte cenu: 25000
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
4
Zadejte id: 2
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program
1
3-Pocitac HP
Zvolte akci, kterou chcete provest:
1 > Vypsat seznam produktu
2 > Pridat novy produkt
3 > Editovat produkt dle ID
4 > Vymazat produkt dle ID
5 > Ukoncit program

Bohužel vzhledem k interaktivní povaze nelze program automaticky otestovat.
Můžete jej nicméně porovnat s přiloženým řešením a třeba i
funkcionalitu vylepšit (přidání nákupního košíku a jeho správu,
automatické dodávání produktů při nedostatku a tak dále).



*/

#include <iostream>
#include "databaze.h"

using namespace std;
int main()
{
	databaze Databaze;
	int volba = 0;
	int tmp = 0;

	while (volba != 5)
	{
		cout << "Zvolte akci, kterou chcete provest:"<<endl;
		cout << "	1 > Vypsat seznam produktu" << endl;
		cout << "	2 > Pridat novy produkt" << endl;
		cout << "	3 > Editovat produkt dle ID" << endl;
		cout << "	4 > Vymazat produkt dle ID" << endl;
		cout << "	5 > Ukoncit program" << endl;
		cin >> volba;
		
		while (cin.fail()) {
			cout << "Error" << std::endl;
			cin.clear();
			cin.ignore(256, '\n');
			cin >> volba;
		}

		switch (volba)
		{
		case 1:
			Databaze.vypsatSeznam();
			break;

		case 2:
			Databaze.pridatPolozku();
			break;

		case 3:
			cout << "Zadejte ID: ";
			cin >> tmp;
			Databaze.upravitPolozku(tmp);
			break;

		case 4:
			cout << "Zadejte ID: ";
			cin >> tmp;
			Databaze.odebratPolozku(tmp);
			break;

		case 5:
			cout << "Ukoncuji program" << endl;
			break;

		default:
			cout << "Spatne zadane cislo, zkuste to znovu";
			break;
		}

	}
	return 0;
}

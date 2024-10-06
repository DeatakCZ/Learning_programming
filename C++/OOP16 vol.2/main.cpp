#include <iostream>
using namespace std;
#include <string>


#include "Zakaznik.h"
#include "Adresa.h"
#include "Produkt.h"
#include "Objednavka.h"
#include "GatewayProcessing.h"

int main()
{
	Adresa adresa("Zahradky", "12/45", "Praha", "16000", "Czech Republic");
	Zakaznik zakaznik("Karel", "Vomacka", adresa, adresa);

	Produkt produkt("Body pro ITnetwork.cz", 200);
	Produkt produkt2("Kniha o programovani", 800);

	Produkt produkty[3];
	produkty[0] = produkt;
	produkty[1] = produkt2;
	produkty[2] = produkt;

	Objednavka objednavka(zakaznik, produkty, 3, 54321);
	
	GatewayProcessing p;
	cout << objednavka.getCity();
	p.process(objednavka);



	



	cin.get();
	return 0;
}

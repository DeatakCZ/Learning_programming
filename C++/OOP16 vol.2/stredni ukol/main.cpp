/*
Středně pokročilý příklad

Vytvořte předka reprezentujícího obecný nástroj.Předek bude
disponovat atributy vaha, nazev a abstraktní metodou
pracuj(), která nebere žádný parametr a vrací
string.

Z nástroje vytvořte potomky Pila, Sroubovak a
Kladivo.Kladivo bude mít vlastnost typu
bool zda je obouruční.Nástroje budou implementovat metodu
pracuj() tak, že kladivo vypíše do konzole "zatloukam" a
podobně.Přidejte ještě potomka šroubováku
ElektrickySroubovak, který má navíc kapacitu baterie,
nastavitelnou v konstruktoru.

V druhé části úkolu vytvořte třídu Bedna, která bude
sloužit k uchovávání nářadí.Její vlastností je maximální váha
(nosnost, tedy kolik bedna unese) a poté váha nářadí, které je v ní
vložené.Implementujte metody pro vložení nástroje do bedny a vyndání
nástroje z bedny.Ošetřete, aby se nedal vložit nástroj tak, aby se
překročila nosnost bedny.Zamyslete se nad zapouzdřením, pole s nářadím
nesmí být veřejné, aby se nedal obejít limit nosnosti.

Vaši práci demonstrujte na testovacích datech.Nakonec nechte všechny
nástroje v bedně pracovat.

Konzolová aplikace
V bedne je pila Fiskar, pila obloukova, sroubovak Torx, sroubovak Philips elektricky
rezu
rezu
sroubuji
sroubuji elektricky
V bedne je pila Fiskar, pila obloukova, sroubovak Torx, sroubovak Philips elektricky, male kladivo
rezu
rezu
sroubuji
sroubuji elektricky
zatloukam
*/









#include <iostream>


#include "Pila.h"
#include "Sroubovak.h"
#include "Kladivo.h"
#include "ElektrickySroubovak.h"
#include "Bedna.h"


int main()
{
	Pila pila;
	cout << pila.pracuj();

	Sroubovak Sroubovak;
	cout << Sroubovak.pracuj();

	Kladivo Kladivo(0);
	cout << Kladivo.pracuj();

	ElektrickySroubovak ElSroubovak(5);
	cout << ElSroubovak.pracuj();

	Bedna Bedna(10);
	Bedna.vlozitNaradi(Sroubovak);
	Bedna.Vypis();
	Bedna.vlozitNaradi(pila);
	Bedna.Vypis();
	Bedna.vlozitNaradi(ElSroubovak);
	Bedna.Vypis();
	Bedna.vlozitNaradi(Kladivo);
	Bedna.Vypis();

	Bedna.VyjmoutNaradi(2);
	Bedna.Vypis();
	Bedna.PouzitNaradi();


	cin.get();
	return 0;
}







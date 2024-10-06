/*


Naprogramujte aplikaci, ve které figuruje třída Clovek. Člověk má jméno, příjmení a datum narození.
Hodnoty těchto atributů bude aplikace získávat skrz konstruktor. Parametry konstruktoru pojmenujte stejně jako atributy třídy. 
Použijte klíčové slovo this, aby program dokázal rozlišit mezi atributy a parametry.

Instanci předejte tyto parametry:

"Karel", "Novotny"
32 let
Parametry instance následně vypište, viz níže.

Ukázka obrazovky programu:

Me jmeno je Karel Novotny a je mi 32 let.


*/
/*


#include "Clovek.h"

int main()
{
	
	//Clovek clovek1;
	//clovek1.vypis();

	Clovek clovek2("Karel","Novotny",32);
	clovek2.vypis();


	return 0;
}


*/
/*


Napiště třídu, která reprezentuje hackera. Hacker má své systémové heslo a umí napadnout jiného hackera a toto heslo mu změnit,
čímž mu zabrání přihlásit se do systému.

Třída se tedy bude jmenovat Hacker a bude mít soukromý atribut heslo (protože jej nikomu nechceme sdělovat) a metodu login(), 
která bude heslo přijímat v parametru. Pokud se heslo předané do metody login() shoduje s heslem daného hackera, program vypíše informaci o přihlášení.
V opačném případě bude program informovat o špatně zadaném hesle. Dále bude třída poskytovat metodu hackuj(), která nastaví heslo jinému hackerovi,
jehož instanci předáme v parametru.

Například pro kód:

Hacker pavel("heslo");
Hacker karel("password");
pavel.login("heslo");
pavel.hackuj(karel);
karel.login("password");
Bude výstup vypadat následovně:

Hacker prihlasen
Spatne heslo


*/
/*

#include "Hacker.h"

int main()
{
	Hacker karel("heslo");
	Hacker pavel("heslo2");


	karel.login("heslo");
	karel.hackuj(&pavel);
	pavel.login("heslo2");
	pavel.login("heslo");

	return 0;
}


*/
/*


Naprogramujte aplikaci, ve které figuruje auto a garáž. U auta evidujte SPZ a jeho barvu, u garáže evidujte jaké auto je v ní zaparkované 
(ne jen jeho SPZ, ale opravdu celé auto). Nechte auto s SPZ "ABC1234" zaparkovat do garáže (pomocí jeho metody zaparkuj()) a poté nechte vypsat garáž,
která při svém výpisu vypíše i auto v ní zaparkované.

Ukázka obrazovky programu:

V garazi je cervene auto s poznavaci znackou ABC1234


*/
/*


#include "Automobil.h"
#include "Garaz.h"

int main()
{
	Garaz garaz;
	Automobil kara1("modre", "epepep");
	Automobil kara2("cervene", "ABC1234");

	garaz.zapis(&kara1);
	garaz.zapis(&kara2);
	garaz.vypis();


	return 0;
}

*/
/*



Vytvořte třídu Produkt s atributy cena a mnozstvi. Atributy nesmí být veřejně přístupné.
To znamená, že jediným způsobem, jak nastavit cenu a množství bude použít gettery a settery.
Gettery a settery jsou obyčejné metody, jejichž jedinou úlohou je nastavit (resp. získat) specifický atribut třídy.
Gettery zpravidla začínají slovem ziskej (či anglicky get, například ziskejCenu() či getPrice())
a naopak settery slovem nastav (či anglicky set, například nastavCenu(novaCena) či setPrice(newPrice)).
Rozmyslete si, zda by některé metody měly být konstantní.

Vytvarim produkt
Nastavuji cenu produktu
Nastavuji mnozstvi produktu
Na sklade je 11 produktu z

*/
/*



#include  "Produkt.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Vytvarim produkt" << endl;
	Produkt p;
	cout << "Nastavuji cenu produktu" << endl;
	p.setCena(15);
	cout << "Nastavuji mnozstvi produktu" << endl;
	p.setMnozstvi(11);
	cout << "Na sklade je " << p.getMnozstvi() << " produktu za cenu " << p.getCena() << endl;
	return 0;
}


*/
/*



Vytvořte třídu CeleCislo, která reprezentuje číslo. Třída bude mít jediný atribut hodnota typu int. 
Dále implementujte metodu secti(), která umožní k číslu přečíst jinou instanci této třídy (používáme metodu namísto operátoru +). 
Správně určete, co vše by mělo být označeno jako konstantní. Na ukázku nechte sečíst 2 instance čísel pomocí této metody a vypište výsledek.


2 + 3 = 5


*/
/*


#include "CeleCislo.h"
#include <iostream>
using namespace std;

int main()
{
	CeleCislo A(2);
	CeleCislo B(3);

	cout << A.cislo << "+" << B.cislo << "=" << A.secti(B.cislo)<<endl;
	return 0;
}


*/
/*




V pokročilém cvičení vytvořte tzv. Blum-Blum-Shub generátor náhodných čísel. Nebojte, je velice jednoduchý :)
Třída bude mít atributy udávající základ z a modulo m. Každé další náhodné číslo se vypočítá jako a2 mod z. 
Modulo by mělo být prvočíslo a zároveň by mělo zůstat skryté (nemůže se tedy jednat o veřejný atribut). 
Svůj nový generátor nechte vygenerovat 10 čísel a ta vypište.

Všimněte si, že se jedná o tzv. pseudonáhodný generátor. Například pro základ 5192 a modulo 7823 bude výstup vždy stejný.


1225
137
3193
3353
1929
3569
1785
3529
3425
1897


*/
/*

#include <iostream>
#include "Generator.h"
using namespace std;

int main()
{
	Generator generator(1457, 7823);
	
	for (int i = 0; i < 10; i++)
	{
		cout << generator.vygeneruj() << endl;

	}
}

*/
/*


Naprogramujte aplikaci pro převod mezi stupni a radiány.
Jelikož vše, co jste se učili ve škole, bylo ve stupních a vše, co se budete učit v programování, bude v radiánech,
bude se vám znalost převodu hodit i do budoucna. Pokud vzorec neznáte, vyhledejte si jej :) V aplikaci pro převody použijte statickou třídu.

Ukázka obrazovky programu:

6.28 radianu je 359.817 stupnu
90 stupnu je 1.5708 radianu

*/
/*

#include <iostream>
#include "Prevodnik.h"



int main()
{
	Prevodnik prevodnik;
	prevodnik.RadianyNaStupne(6.28);
	prevodnik.StupneNaRadiany(90);

	return 0;
}

*/
/*


Naprogramujte aplikaci, která vyrábí cukroví. Každé cukroví má nějakou barvu, tvar a váhu. 
Existuje např. cukroví banánové, jahodové, čokoládové a další. Jednotlivé druhy cukroví se odlišují pouze hodnotami v atributech. 
Jelikož by bylo zbytečné tvořit pro každý druh cukroví třídu a zároveň je pracné zadávat konkrétní atributy znovu a znovu tam,
kde potřebujeme konkrétní instanci cukroví, použijeme zjednodušenou podobu návrhového vzoru Factory.

Factory (továrna) se používá zejména v případě, kdy potřebujete velké množství různě nastavených instancí.
Jedná se o třídu se statickými metodami, které vytvoří instanci, nastaví ji určité parametry a takto nastavenou instanci vrátí.
Vytvořte takovouto továrnu a implementujte v ní metody pro výrobu banánového, jahodového a čokoládového cukroví. 
Následně v aplikaci touto továrnou vytvořte několik kusů cukroví od každého druhu a ty vypište.

Cukrovi barvy zlute tvaru kulate o hmotnosti 20g.
Cukrovi barvy zlute tvaru kulate o hmotnosti 20g.
Cukrovi barvy zlute tvaru kulate o hmotnosti 20g.
Cukrovi barvy cervene tvaru kulate o hmotnosti 10g.
Cukrovi barvy cervene tvaru kulate o hmotnosti 10g.
Cukrovi barvy cervene tvaru kulate o hmotnosti 10g.
Cukrovi barvy hnede tvaru hranate o hmotnosti 40g.
Cukrovi barvy hnede tvaru hranate o hmotnosti 40g.
Cukrovi barvy hnede tvaru hranate o hmotnosti 40g.
*/

/*
#include "Tovarna.h"



int main()
{
	Tovarna tovarna;
	for (int i = 0; i < 3; i++)
		tovarna.Vygeneruj("zlute", "kulate", "20g");
	for (int i = 0; i < 3; i++)
		tovarna.Vygeneruj("cervene", "kulate", "10g");
	for (int i = 0; i < 3; i++)
		tovarna.Vygeneruj("hnede", "hranate", "40g");

	return 0;
}



*/
/*


Vytvořte hrací kostku, která obsahuje metodu hod(). Je to ta samá kostka, jakou jsme tvořili na začátku seriálu.
hod() vrací náhodné číslo od 1 do 6. Vytvořte 2 instance těchto kostek a nechte je v cyklu 5x hodit.

Hod a: 4
Hod a: 4
Hod a: 1
Hod a: 5
Hod a: 2
Hod b: 4
Hod b: 4
Hod b: 1
Hod b: 5
Hod b: 2

*/


#include "Kostka.h"
#include <iostream>

using namespace std;




int main()
{
	Kostka kostka1(6);
	Kostka kostka2(6);
	
	
	for (int i = 0; i < 5; i++)
		cout << "Hod a: "<<kostka1.Hod()<<endl;
	for (int i = 0; i < 5; i++)
		cout << "Hod b: " << kostka2.Hod() << endl;


	return 0;
}
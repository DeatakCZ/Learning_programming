/*

Běžně pro odřádkování používáme std::endl konstantu. Vaším úkolem bude vytvořit podobnou konstantu, ale pro výpis tabulátoru.
Tato konstanta je samozřejmě již ve standardní knihovně implementována, nicméně my si zkusíme, jak by vypadala implementace od píky.

Vytvořte třídu Tab, která bude mít veřejný statický konstantní atribut tab.
Při použití tohoto atributu ve výpisu se vypíše sekvence pro tabulátor, tj. "\t".

Ukázka obrazovky programu:

Zacatek         a konec textu
Ukázka použití této konstanty při výpisu:

cout << "Zacatek" << Tab::tab << Tab::tab << "a konec textu" << endl;

*/
/*

#include "Tab.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Tab B;
	cout << "Zacatek" << Tab::tab << Tab::tab << "a konec textu" << endl;
	//cout << "Zacatek" << B.tab << B.tab << "a konec textu" << endl;
	return 0;
}


*/
/*



Vytvořte třídu Komplexni, která reprezentuje komplexní číslo. To je číslo, které má dvě složky, skládá se tedy z dvou čísel:

komplexní složka
imaginární složka
Třída bude mít atributy určující reálnou a imaginární složku čísla. Pro reprezentaci složek čísla použijte datový typ double. 
Třídě implementujte základní operátory jako +, -, *, /, =. Výsledkem operace s komplexními čísly je opět komplexní číslo.

Početní operace s komplexními čísly
Pojďme si definovat, jak početní operace s komplexními čísly fungují:

Sčítání
Sčítání a odčítání komplexních čísel je triviální, stačí sečíst, resp. odečíst jejich reálné a imaginární složky:

Reálná složka výsledného komplexního čísla je součet reálných složek obou čísel. (r = a.r + b.r)
Imaginární složka výsledného komplexního čísla je součet imaginárních složek obou čísel. (i = a.i + b.i)
Odčítání
Reálná složka výsledného komplexního čísla je rozdíl reálných složek obou čísel. (r = a.r - b.r)
Imaginární složka výsledného komplexního čísla je rozdíl imaginárních složek obou čísel. (i = a.i - b.i)
Násobení
Násobení je o něco složitější, uveďme si pouze vzorečky:

Reálná složka výsledného komplexního čísla (r = a.r * b.r - a.i * b.i)
Imaginární složka výsledného komplexního čísla (i = a.r * b.i + a.i * b.r).
Dělení
A dělení je ještě o chlup složitější:

Reálná složka výsledného komplexního čísla r = (a.r * b.r + a.i * b.i) / (b.r * b.r + b.i * b.i)
Imaginární složka výsledného komplexního čísla r = (a.i * b.r - a.r * b.i) / (b.r * b.r + b.i * b.i)
V případě, že jsou obě složky dělení nulové, vraťte komplexní číslo se složkami [0;0].

Třídě dále implementujte operátor << pro výpis, komplexní číslo se vypíše jako r+ii. 
Dodejte gettery a settery pro reálnou a imaginární část a příklad demonstrujte na uvedených testovacích datech.

Ukázka obrazovky programu:

1+1i + -1+3i = 0+4i
1+1i - -1+3i = 2-2i
1+1i * -1+3i = -4+2i
1+1i / -1+3i = 0+0i


*/
/*






#include "Komplexni.h"
#include<iostream>
using namespace std;

int main()
{
	Komplexni A(1, 1);
	Komplexni B(-1, 3);
	cout << A << " + " << B << " = " << A + B << endl;
	cout << A << " - " << B << " = " << A - B << endl;
	cout << A << " * " << B << " = " << A * B << endl;
	cout << A << " / " << B << " = " << A / B << endl;




	return 0;
}


*/
/*




V pokročilém příkladu vytvořte třídu Pole. Tato třída bude uchovávat pole celých čísel a jeho velikost.
Bude se také umět inicializovat z obyčejného pole, předaného konstruktorem spolu s jeho velikostí. Instance třídy rovněž půjde vypsat do konzole.

Třídě implementujte operátor pro sčítání, který spojí dvě takováto pole do jednoho nového.

Dále implementujte metodu pridej(), která přidá nový prvek uvedený v parametru na konec pole.
Pokud jste správně implementovali předchozí operaci, toto rozšíření je snadné (použijete již existující funkcionalitu).

Nezapomeňte správně implementovat práci s pamětí (tj. správnou implementaci hluboké kopie).

Data demonstrujte na polích čísel od 1 do 10 ({ 0,1,2,3,4,5,6,7,8,9 }) a prvních 7 čísel Fibonacciho posloupnosti ({ 0,1,1,2,3,5,8 }).

Nejprve vypište instance svých polí. Poté první pole zkopírujte a přidejte do něj číslo 11. Původní pole a jeho kopii vypište.
Nakonec spojte původní první pole s druhým polem a výsledek rovněž vypište.

Ukázka obrazovky programu:

[0,1,2,3,4,5,6,7,8,9]
[0,1,1,2,3,5,8]
[0,1,2,3,4,5,6,7,8,9]
[0,1,2,3,4,5,6,7,8,9,11]
[0,1,2,3,4,5,6,7,8,9,0,1,1,2,3,5,8]



*/

#include "Pole.h"
#include <iostream>



int main()
{
	int poleA[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int poleB[7] = { 0,1,1,2,3,5,8 };
	
	Pole pole1(poleA, 10);
	Pole pole2(poleB, 7);
	cout <<&pole1<<"   --   "<< pole1 << endl;
	cout << &pole2 << "   --   " << pole2 << endl;
	
	Pole pole3 = pole1;
	pole3.pridej(11);
	cout << &pole1 << "   --   " << pole1 << endl << &pole3 << "   --   " << pole3 << endl;
	//cout << pole1.pole[0] << "  " << pole1.pole[1]<<endl;
	cout << pole1 + pole2<<endl;

	return 0;
}
/*



V pokročilém příkladu naimplementujte jednoduchou maticovou kalkulačku.
Matice je několik čísel, uspořádaných do obdélníkového tvaru.



Sčítání a odčítání matic funguje po jednotlivých prvcích (tj. prvky
na stejném indexu se sečtou, resp. odečtou). Násobení matic je o něco
komplikovanější a namísto dlouhého vysvětlování se doporučuji podívat
na wikipedii.

Pro všechny tyto operace musí být matice ve správném tvaru. To znamená,
že nejde sečíst matici 2x2 s maticí 3x3 a podobně. Obdobné podmínky
existují i pro násobení. Váš program takové situace detekuje a v
případě nevyhovujících matic vyvolá výjimku.

Vytvořte matice:

a = 1 1
    1 0

b = 1 2
    3 4
    5 6

c = 1 2 3
    4 5 6

A následně vypište výsledky těchto operací:

b * c
a + a
a * a * a

Kód pro vytvoření matic a operace by mohl vypadat takto:

double aPole[4] = { 1,1,1,0 };
Matice a(aPole, 2, 2);

double bPole[6] = { 1,2,3,4,5,6 };
double cPole[6] = { 1,2,3,4,5,6 };
Matice b(bPole, 2, 3);
Matice c(cPole, 3, 2);

cout << b * c << endl;
cout << a + a << endl;
cout << a * a * a << endl;

try
{
    cout << a + b << endl;
}
catch (exception e)
{
    cout << e.what() << endl;
}

A ukázka obrazovky programu:

Konzolová aplikace
22 28
49 64

2 2
2 0

3 2
2 1

Spatna velikost matic




*/
#include <iostream>
#include "Matice.h"


using namespace std;

int main()
{

    double aPole[4] = { 1,1,1,0 };
    Matice a(aPole, 2, 2);
    double bPole[6] = { 1,2,3,4,5,6 };
    double cPole[6] = { 1,2,3,4,5,6 };
    Matice b(bPole, 2, 3);
    Matice c(cPole, 3, 2);

    cout << b * c << endl;
    cout << a + a << endl;
    cout << a * a * a << endl;

    try
    {
        cout << a + b << endl;
    }
    catch (RuzneVelkeMaticeException e)
    {
        cout << e.what() << endl;
    }
    

}
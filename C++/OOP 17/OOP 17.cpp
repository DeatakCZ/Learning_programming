/*



Vašim cílem bude implementovat řazení pomocí algoritmu  Bubblesort.
Bubblesort namplementujte jako metodu do třídy Pole, kterou jsme
používali v lekci.Pro jistotu přikládám její zdrojový kód.

template<typename T>
class Pole
{
private:
    T* pole;
    int pocet_prvku;
    int velikost_pole;
public:
    Pole(int velikost = 8);
    ~Pole();
    Pole(const Pole& p);
    Pole& operator = (const Pole& s);
};

template<typename T>
Pole<T>::Pole(int velikost = 8) : velikost_pole(velikost), pocet_prvku(0)
{
    this->pole = new T[velikost];
}

template<typename T>
inline Pole<T>::~Pole()
{
    delete[] this->pole;
}

template<typename T>
inline Pole<T>::Pole(const Pole<T> &p) : pole(NULL)
{
    *this = p;
}

template<typename T>
inline Pole<T>& Pole<T>::operator=(const Pole<T> &s)
{
    if (this == &s)
        return *this;
    this->~Pole();
    this->pole = new T[s.pocet_prvku];
    for (int i = 0; i < s.pocet_prvku; i++)
        this->pole[i] = s->pole[i];
    this->pocet_prvku = s.pocet_prvku;
    this->velikost_pole = this->pocet_prvku;
    return *this;
}

Do pole vložte 10 náhodných čísel, ty poté seřaďte a vypište.Díky
tomu, že jsme použili šablonu, můžeme použít stejný postup pro
řetězce.

Ukázka obrazovky programu :

Konzolová aplikace
2 4 22 35 56 62 68 71 88 93
Blabla, Hakuna Matata, ITnetwork.cz, Nejaka veta, Petr Vocasek



*/
/*



#include "Pole.h"
#include <iostream>
using namespace std;
#define TYP string

int main()
{
    Pole<TYP> p;
    TYP prvek = NULL;
    int volba=2;

    for (int i = 0; i < 5; i++)
    {
        cout << i << ". prvek: ";
        cin >> prvek;
        p.vlozNakonec(prvek);
          cin.clear();
    }

    cout << "Pole: ";
    for (int i = 0; i < p.velikost(); i++)
        cout << p[i] << " ";
    cout << endl;

    while (volba != 3)
    {
        cout << "Vyberte dalsi akci(1=bubble,2=vypsat,3=konec): ";
        cin >> volba;
        if (volba == 1)
            p.BUBBLE();
        else if (volba == 2)
        {
            cout << "Pole: ";
            for (int i = 0; i < p.velikost(); i++)
                cout << p[i] << " ";
            cout << endl;
        }
    }


    return 0;
}




*/
/*



Středně pokročilý příklad 

Vytvořte třídu Zasobnik, který bude fungovat (překvapivě) jako struktura zásobník.
Pokud jste se se strukturou typu LIFO ještě nesetkali, funguje tak, že do nín postupně přidáváme prvky 
a odebírat můžeme jen posledně přidaný prvek.
Je to jako bychom měli na stole položený štos prázdných papírů. 
Když je doplňujeme, přidáme je postupně na vrchol zásobníku (na ostatní papíry,nebudeme je dávat dospodu). 
Když potřebujeme prvek (papír) odebrat,odebereme ho také z vrcholu.

Graficky si zásobník můžeme představit takto:



Zásobník samozřejmě vytvořte jako šablonu. Není špatný nápad použít již implementovanou třídu Pole uvnitř zásobníku.
Do zásobníku poté vložte 10 čísel a ta vypište.

Kód používající váš zásobník by měl vypadat asi takto:

int main()
{
    Zasobnik<int> a;
    for (int i = 0; i < 10; i++)
        a.vloz(i * 2);

    while (!a.jePrazdny())
        cout << a.odeber() << endl;

    cin.get();
    return 0;
}


*/
/*



#define TYP string
#include "Zasobnik.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Zasobnik<TYP> a;
    for (int i = 0; i < 10; i++)
    {
        switch (i/2)
        {
        case 0: a.vloz("1. cislo"); break;
        case 1: a.vloz("2. cislo"); break;
        case 2: a.vloz("3. cislo"); break;
        case 3: a.vloz("4. cislo"); break;
        case 4: a.vloz("5. cislo"); break;

        }
    }


    while (!a.jePrazdny())
        cout << a.odeber() << endl;

    cin.get();
    return 0;
}



*/




/*




V předchozí lekci jsme si řekli, že statické atributy jsou pro jednotlivé parametry šablony oddělené.
Vašim úkolem je nyní vytvořit šablonovou třídu, která bude počítat počet svých instancí bez ohledu na šablonový parametr.

Pro příklad si vezměme následující kus kódu:

cout << NejakaSablona<int>::ziskejPocetInstanci() << endl;
NejakaSablona<int> a;
cout << NejakaSablona<int>::ziskejPocetInstanci() << endl;
NejakaSablona<char> b;
cout << NejakaSablona<int>::ziskejPocetInstanci() << endl;
{
    NejakaSablona<int> c;
    cout << NejakaSablona<int>::ziskejPocetInstanci() << endl;
}
cout << NejakaSablona<int>::ziskejPocetInstanci() << endl;




*/






#define TYP string
#include "Zasobnik.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{



    /*
    Zasobnik<TYP> a;
    for (int i = 0; i < 10; i++)
    {
        switch (i / 2)
        {
        case 0: a.vloz("1. cislo"); break;
        case 1: a.vloz("2. cislo"); break;
        case 2: a.vloz("3. cislo"); break;
        case 3: a.vloz("4. cislo"); break;
        case 4: a.vloz("5. cislo"); break;

        }
    }
    */


    cout << Zasobnik<int>::ziskejPocetInstanci() << endl;
    Zasobnik<int> a;
    cout << Zasobnik<int>::ziskejPocetInstanci() << endl;
    Zasobnik<char> b;
    cout << Zasobnik<int>::ziskejPocetInstanci() << endl;
    {
        Zasobnik<int> c;
        cout << Zasobnik<int>::ziskejPocetInstanci() << endl;
    }
    cout << Zasobnik<int>::ziskejPocetInstanci() << endl;
    
    while (!a.jePrazdny())
        cout << a.odeber() << endl;
        
    cin.get();
    return 0;
}
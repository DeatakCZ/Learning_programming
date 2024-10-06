/*



Vytvořte třídu Fronta, která bude fungovat jako FIFO
struktura. To znamená, že první hodnotu, kterou do fronty vložíte,
vytáhnete jako první. Jako by prvky v kolekci opravdu stály ve frontě, ty
nové se přidávaly na konec fronty a odebíralo se z jejího začátku. Je to
opačná struktura k zásobníku, který jsme již v cvičeních
implementovali.

Situaci přiblíží následující obrázek:



Frontu samozřejmě vytvořte jako šablonu. Opět můžete použít již
implementovanou třídu Pole uvnitř fronty.

Speciální případ nastane, pokud budeme chtít z fronty získat další
prvek, ale fronta je již prázdná. V takovém případě fronta vyvolá
výjimku.

Kód naplnění a výpisu vaší fronty může vypadat následovně:

int main()
{
    Fronta<int> f;

    for (int i = 0; i < 10; i++)
        f.vloz(i * 3);

    try
    {
        while (true)
            cout << f.odeber() << endl;
    }
    catch (exception ex)
    {
        cout << ex.what() << endl;
    }


    cin.get();
    return 0;
}

Ukázka obrazovky programu:

Konzolová aplikace
0
3
6
9
12
15
18
21
24
27
Fronta je prazdna




*/

#include <iostream>
#include "Fronta.h"



int main()
{
    Fronta<int> f;

    for (int i = 0; i < 10; i++)
        f.vloz(i * 3);

    try
    {
        while (true)
            cout << f.odeber() << endl;
    }
    catch (PrazdnaFrontaException ex)
    {
        cout << ex.what() << endl;
    }


    cin.get();
    return 0;
}

/*

Vaším úkolem bude napsat funkci, ve které uživatel
opakovaně zadává slova. Ovšem ve chvíli, kdy uživatel vypíše "end" nebo
"konec", funkce se ukončí výjimkou. Výjimka bude obsahovat poslední zadané
slovo (tedy to ukončovací) a také všechna zadaná slova. Musíte si tedy pro
výjimku vytvořit vlastní třídu.

Ukázka obrazovky programu:

Konzolová aplikace
Zadejte slovo: Kdo
Zadejte slovo: by
Zadejte slovo: chtel
Zadejte slovo: pouzivat
Zadejte slovo: vyjimky
Zadejte slovo: end
Kdo by chtel pouzivat vyjimky
Ukonceno slovem: end


*/


#include <exception>
#include <iostream>
#include "databaze1.h"





int main()
{
    databaze1 databaze1;
    while (databaze1.konec)
    {
        try
        {
            databaze1.nactiSlovo();
        }
        catch (endException)
        {
            databaze1.vypisSeznam();
            databaze1.konec = 0;
            cout << "Ukonceno slovem end" << endl;

        }
        catch (konecException)
        {
            databaze1.vypisSeznam();
            databaze1.konec = 0;
            cout << "Ukonceno slovem konec" << endl;
        }
    
    
    }
}

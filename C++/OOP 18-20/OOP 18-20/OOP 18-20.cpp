/*

Vytvořte program, kterému zadáváte stále dokola jednotlivá slova, dokud
nezadáte  slovo "konec". Program následně vyhodnotí, kolik
unikátních slov jste použili a vypíše je.

Ukázka obrazovky programu:

Konzolová aplikace
Zadejte slovo: Na
Zadejte slovo: Mesici
Zadejte slovo: neexistuje
Zadejte slovo: minulost
Zadejte slovo: po
Zadejte slovo: ktere
Zadejte slovo: by
Zadejte slovo: nekdo
Zadejte slovo: touzil
Zadejte slovo: nebo
Zadejte slovo: o
Zadejte slovo: ktere
Zadejte slovo: by
Zadejte slovo: snil
Zadejte slovo: konec
Pocet unikatnich slov: 12
Na Mesici neexistuje minulost po ktere by nekdo touzil nebo o snil



*/



#include <iostream>
#include "Databaze.h"

int main()
{
    Databaze databaze;
    while(!databaze.konec)
        databaze.nactiSlovo();

    databaze.vypisSeznam();


}


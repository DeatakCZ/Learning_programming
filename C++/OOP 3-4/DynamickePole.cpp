#include "DynamickePole.h"




DynamickePole::DynamickePole()
{
    pole = new int[10];
    kapacita = 10;
}

DynamickePole::~DynamickePole()
{
    delete[] pole;
}

void DynamickePole::pridat(int cislo)
{
    if (velikost == kapacita)
    {
        zvetsit();
    }
    pole[velikost] = cislo;
    velikost++;
    cout << "Vkladam prvek " << cislo<<endl;
}

void DynamickePole::zvetsit()
{
    int* pole2 = new int[kapacita * 2];
    kapacita *= 2;
    for (int i = 0; i < velikost; i++)
    {
        pole2[i] = pole[i];
    }
    delete[] pole;
    pole = pole2;
}

void DynamickePole::vypsat()
{
    for (int i = 0; i < velikost; i++)
    {
        cout << pole[i] << " ";
    }
    cout << endl;
}


#include "Clovek.h"
#include <iostream>
using namespace std;

Clovek::Clovek(string jmeno) 
    : jmeno(jmeno), unava(20)
{
    cout << "Clovek " << jmeno << " vytvoren" << endl;
}

void Clovek::behej(int km)
{
    if (unava - km < 0)
    {
        cout << "Jsem prilis unaveny" << endl;
        return;
    }
    unava = unava - km;
    cout << "Ubehl jsem " << km << " km" << endl;
}

void Clovek::spi(int hodin)
{
    if (unava + hodin > 20)
    {
        cout << "Nepotrebuji spat" << endl;
        return;
    }
    unava = unava + hodin;
    cout << "Spal jsem " << hodin << " hodin" << endl;
}
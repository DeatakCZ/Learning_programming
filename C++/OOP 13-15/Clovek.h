#ifndef __CLOVEK_H_
#define __CLOVEK_H_

#include <string>

using namespace std;

class Clovek
{

protected:
    string jmeno;
    int unava;

public:
    Clovek(string jmeno);
    void behej(int km);
    void spi(int hodin);

};

#endif

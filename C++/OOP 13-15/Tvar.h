#ifndef __TVAR_H__
#define __TVAR_H__

#include <string>
using namespace std;

class Tvar
{
protected:
	string barva;

public:
	Tvar(string barva);
	string getBarva() const;

};


#endif

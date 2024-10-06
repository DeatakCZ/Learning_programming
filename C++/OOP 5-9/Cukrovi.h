#ifndef __CUKROVI_H__
#define __CUKROVI_H__

#include <string>
using namespace std;

class Cukrovi
{
public:
	Cukrovi(string barva, string tvar, string hmotnost);
	~Cukrovi();
	string getBarva() const;
	string getTvar() const;
	string getHmotnost() const; 

private:
	string barva;
	string tvar;
	string hmotnost;
};

#endif

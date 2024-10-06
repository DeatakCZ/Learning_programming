#ifndef __HACKER_H__
#define __HACKER_H__

#include <string>
using namespace std;

class Hacker
{
private:
	string heslo;
public:
	Hacker();
	Hacker(string heslo);
	~Hacker();
	void login(string heslo);
	void hackuj(Hacker *cil);
};



#endif
#ifndef __CLOVEK_H__
#define __CLOVEK_H__

#include<string>
using namespace std;

class Clovek
{
private:
	int vek = 0;
	string jmeno;
	string prijmeni;
public:
	Clovek();
	~Clovek();
	Clovek(string jmeno, string prijmeni, int vek);
	void vypis(void);
};



#endif
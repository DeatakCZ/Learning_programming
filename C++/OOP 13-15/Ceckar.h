#ifndef __CECKAR_H__
#define __CECKAR_H__

#include "Clovek.h"

using namespace std;

class Ceckar : public Clovek
{
protected:
	string IDE;

public:
	Ceckar(string jmeno, string IDE);
	void programuj(int radku);
	string getIDE() const;
};


#endif

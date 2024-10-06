#ifndef __HRAC_H__
#define __HRAC_H__

#include <string>


class Hrac
{
public:
	Hrac();
	Hrac(std::string jmeno);
	~Hrac();
	std::string jmeno;
};

#endif
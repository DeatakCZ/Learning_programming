#ifndef __GENERATOR_H__
#define __GENERATOR_H__


#include <string>
#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


class Generator
{
public:
	Generator();
	~Generator();
	string prvniSlova[7] = { "Tlusty ", "Maly ", "Rychly ", "Nejlepsi ", "Nejhorsi ", "Modry ", "Automatizovany " };
	string druheSlova[7] = { "horolezec ", "postak ", "programator ", "elektrikar ", "dinosaurus ", "alkoholik ", "doktor " };
	string tretiSlova[4] = { "malo ", "pomalu ", "nerad ", "rychle " };
	string ctvrteSlova[6] = { "programoval ", "pocital ", "jezdil ", "cetl ", "behal ", "psal " };
	string pateSlova[6] = { "ve sklepe", "u babicky", "ve meste", "na strese", "doma", "ve vsi" };

	void prvniSlovo();
	void druheSlovo();
	void tretiSlovo();
	void ctvrteSlovo();
	void pateSlovo();
};

#endif
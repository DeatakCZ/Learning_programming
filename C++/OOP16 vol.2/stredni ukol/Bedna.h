#pragma once
#include "Naradi.h"
#include <iostream>

class Bedna
{
private:
	int nosnost;
	int vaha;
	Naradi* naradi[10];
	int pocet;

public:
	Bedna(int nosnost);
	void vlozitNaradi(Naradi& naradi);
	void VyjmoutNaradi(int pozice);
	void Vypis();
	void PouzitNaradi();

};


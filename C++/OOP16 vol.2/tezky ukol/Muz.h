#pragma once
#include "Clovek.h"
#include "Zena.h"

class Muz: public Clovek
{
public:
	Muz(string jmeno, string prijmeni, string datumNarozeni);

	virtual Clovek* operator+(const Clovek& druhy)const override;
	virtual Clovek* operator+(const Muz& druhy)const override;
	virtual Clovek* operator+(const Zena& druhy)const override;
};


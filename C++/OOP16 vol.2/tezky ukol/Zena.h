#pragma once
#include "Clovek.h"
#include "Muz.h"

class Zena : public Clovek
{
public:
	Zena(string jmeno, string prijmeni, string datumNarozeni);
	
	 virtual Clovek* operator+(const Clovek& druhy)const override;
	 virtual Clovek* operator+(const Muz& druhy)const override;
	 virtual Clovek* operator+(const Zena& druhy)const override;
};


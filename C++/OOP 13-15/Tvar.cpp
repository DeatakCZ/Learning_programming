#include "Tvar.h"


	Tvar::Tvar(string barva)
		:barva(barva)
	{
	}

	string Tvar::getBarva() const
	{
		return barva;
	}
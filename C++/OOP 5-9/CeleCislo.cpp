#include "CeleCislo.h"

CeleCislo::CeleCislo() : CeleCislo(1)
{
	cislo = 0;
}

CeleCislo::CeleCislo(int a)
{
	cislo = a;
}

CeleCislo::~CeleCislo()
{

}

int CeleCislo::secti(int a)
{
	return a + cislo;
}
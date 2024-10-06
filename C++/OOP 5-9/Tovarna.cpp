#include "Tovarna.h"


Tovarna::Tovarna()
{

}

Tovarna::~Tovarna()
{

}

Cukrovi *Tovarna::Vygeneruj(string barva, string tvar, string hmotnost)
{
	return new Cukrovi(barva, tvar, hmotnost);
}

#include "Generator.h"
#include <ctime>
#include <cstdlib>

Generator::Generator() :Generator(10, 7)
{
	srand(time(NULL));
}

Generator::Generator(int cislo, int modulo)
{
	this->z = cislo;
	this->m = modulo;
}

Generator::~Generator()
{

}

int Generator::vygeneruj()
{
	return (z * z) % m;
}

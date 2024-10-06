#include <string>
#include <iostream>
#include "seznamka.h"



void seznamka::vypis(void)
{
	std::cout << "Ahoj, ja jsem " << jmeno << ", je mi " << vek << " a muj kamarad je " << *pritel << std::endl;
}
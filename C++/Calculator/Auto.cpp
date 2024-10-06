#include "Auto.h"

void Auto::nalozit(int mnozstvi)
{
	if (mnozstvi <= kapacita-naklad)
		naklad = (naklad + mnozstvi);
	else
		naklad = naklad;
}
void Auto::vylozit(int mnozstvi)
{
	if (mnozstvi <= naklad)
		naklad = (naklad - mnozstvi);
	else
		naklad = naklad;
}
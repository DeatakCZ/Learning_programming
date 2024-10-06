#pragma once
#include "Sroubovak.h"
class ElektrickySroubovak : public Sroubovak
{

private:
	int kapacita;

public:
	ElektrickySroubovak(int kapacita);
	string pracuj();
};


#pragma once
#include "Naradi.h"


class Kladivo : public Naradi
{
private:
	bool obourucni;
public:
	Kladivo(bool obouruc);
	string pracuj();


};


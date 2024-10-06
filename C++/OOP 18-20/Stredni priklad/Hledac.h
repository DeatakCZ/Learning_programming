#pragma once
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std::chrono;
using namespace std;

class Hledac
{
private:
	tm odData;
	tm doData;
	char tmp;
public:

	
	time_t zacatek;
	int delka;
	bool jePatek13(time_t cas);


};


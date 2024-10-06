#pragma once
#include <vector>
#include "PrazdnaFrontaException.h"
using namespace std;


template <typename T>
class Fronta
{
private:
	vector<T> Data;
	int pocet;
public:
	void vloz(T prvek);
	T odeber();

};


template <typename T>
void Fronta<T>::vloz(T prvek)
{
	this->Data.push_back(prvek);
}


template <typename T>
T Fronta<T>::odeber()
{
	if (!this->Data.empty())
	{
		T tmp = this->Data.front();
		this->Data.erase(this->Data.begin());
		return tmp;
	}
	else
		throw(PrazdnaFrontaException());
}
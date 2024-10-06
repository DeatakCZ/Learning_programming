
#include <iostream>
#include <string>
using namespace std;

#include "Clovek.h"


Clovek::Clovek()
{
	string _jmeno;
	getline(cin, _jmeno);
	cout << "Clovek " << _jmeno << " vytvoren" << endl;
	jmeno = _jmeno;
}

Clovek::~Clovek()
{

}
// 
void Clovek::beh(int _delka)
{
	if (_delka+unava>20)
		cout << "Jsem prilis unaveny" << endl;
	else
	{
		cout << "Ubehl jsem " << _delka << " km" << endl;
		unava += _delka;
	}
}

void Clovek::spanek(int _delka)
{
	if (unava < _delka)
		cout << "Nepotrebuji spat";
	else
	{
		cout << "Spal jsem " << _delka << " hodin" << endl;
		unava -= _delka;
	}
}

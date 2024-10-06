#include "Pole.h"


Pole::Pole()
{

}

Pole::Pole(const Pole& Pole)
{
	int* PomPole = new int[Pole.velikost];
	for (int i = 0; i < Pole.velikost; i++)
	{
		PomPole[i] = Pole.pole[i];
	}
	this->pole = PomPole;
	this->velikost = Pole.velikost;
}

Pole::Pole(int* pole, int velikost)
{
	int* PomPole =  new int[velikost];
	for (int i = 0; i < velikost; i++)
	{
		PomPole[i] = pole[i];
	}
	this->pole = PomPole;
	this->velikost = velikost;
}
Pole::~Pole()
{
	delete[] this->pole;
	this->pole = NULL;
}

void Pole::pridej(int cislo)
{
	this->velikost++;
	int* PomPole = new int[this->velikost];

	for (int i = 0; i < this->velikost-1; i++)
		PomPole[i] = this->pole[i];

	PomPole[this->velikost-1] = cislo;

	delete[] this->pole;
	this->pole = PomPole;

	//for (int i = 0; i < this->velikost; i++)
	//	cout << this->pole[i] << " \\ ";
}



Pole Pole::operator+(Pole& pole)
{
	Pole PomPole;
	PomPole.velikost = this->velikost + pole.velikost;
	PomPole.pole = new int[this->velikost + pole.velikost];
	for (int i = 0; i < this->velikost; i++)
	{
		PomPole.pole[i] = this->pole[i];

	}
	//cout << "prvni" << endl;
	for (int i = 0; i < pole.velikost; i++)
	{
		PomPole.pole[i+ this->velikost] = pole.pole[i];

	}
	//cout << "druhy" << endl;
	//for (int i = 0; i < PomPole.velikost; i++)
	//{
	//	cout << PomPole.pole[i] << "  ";
	//}
	return PomPole;
}

ostream& operator<<(ostream& str, const Pole& pole)
{
	str << "[";
	for (int i = 0; i < pole.velikost; i++)
	{
		str << pole.pole[i];
		if (i + 1 != pole.velikost)
			str << ",";
	}
	str << "]";
	return str;
}
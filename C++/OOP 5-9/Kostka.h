#ifndef __KOSTKA_H__
#define __KOSTKA_H__



class Kostka
{
public:
	Kostka(int pocet_sten);
	int Hod();
private:
	int pocet_sten;
	static bool inicializovano;

};



#endif 
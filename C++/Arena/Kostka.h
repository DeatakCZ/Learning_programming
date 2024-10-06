#ifndef __KOSTKA_H__
#define __KOSTKA_H__
class Kostka
{
private:
	int pocetSten;
	static bool inicializovano;

public:
	Kostka();
	Kostka(int pocetSten);
	Kostka(const Kostka&) = default;
	Kostka& operator = (const Kostka&) = default;
	int hod();
	int getPocetSten() const;
};

#endif
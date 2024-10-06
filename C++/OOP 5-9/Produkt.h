#ifndef __PRODUKT_H__
#define __PRODUKT_H__

class Produkt
{
public:
	Produkt();
	~Produkt();
	int getCena() const;
	int getMnozstvi() const;
	void setCena(int cena);
	void setMnozstvi(int mnozstvi);
private:
	int cena;
	int mnozstvi;
};


#endif
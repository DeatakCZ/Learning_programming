#ifndef __CLOVEK_H__
#define __CLOVEK_H__
class Clovek
{
public:
	Clovek();
	~Clovek();
	std::string jmeno;
	int unava = 0;
	void beh(int _delka);
	void spanek(int _delka);
};

#endif
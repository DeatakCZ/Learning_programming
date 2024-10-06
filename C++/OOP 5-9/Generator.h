#ifndef __GENERATOR_H__
#define __GENERATOR_H__

class Generator
{
public:
	Generator();
	Generator(int cislo, int modulo);
	~Generator();
	int vygeneruj();


private:
	int m;
	int z;
};


#endif
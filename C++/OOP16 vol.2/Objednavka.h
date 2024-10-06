#pragma once
#include "Zakaznik.h"
#include "Produkt.h"
#include "Gateway.h"
#include "string"
using namespace std;

class Objednavka : public Gateway
{
private:
	Zakaznik& zakaznik;
	Produkt* produkty;
	int pocetProduktu;
	int CisloObjednavky;


public:
	Objednavka(Zakaznik& zakaznik1,Produkt* produkty, int pocet, int cislo);
    ~Objednavka();

    // Order number
    virtual int getNumber() override;
    // Customer's first name
    virtual string getFirstName() override;
    // Customer's last name
    virtual string getLastName() override;
    // Facturing informations 
    virtual string getStreet() override;
    virtual string getHouseNumber() override;
    virtual string getCity() override;
    virtual string getZip() override;
    virtual string getCountry() override; 
    // Order informations
    virtual const string* const Products() override;
    virtual const int* const  Quantities() override;
    virtual const double* const  Prices() override;
    virtual int countOfProducts() override;
    
};


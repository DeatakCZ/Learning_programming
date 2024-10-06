#pragma once
#include "string"
using namespace std;

class Gateway
{
public:

    /*
     * Order number
     */
    virtual int getNumber() = 0;

    /*
     * Customer's first name
     */
    virtual string getFirstName() = 0;

    /*
     * Customer's last name
     */
    virtual string getLastName() = 0;

    /*
     * Facturing informations
     */
    virtual string getStreet() = 0;
    virtual string getHouseNumber() = 0;
    virtual string getCity() = 0;
    virtual string getZip() = 0;
    virtual string getCountry() = 0;

    /*
     * Order informations
     */
    
    virtual const string* const Products() = 0;

    virtual const int* const  Quantities() = 0;

    virtual const double* const  Prices() = 0;

    virtual int countOfProducts() = 0;
    
};

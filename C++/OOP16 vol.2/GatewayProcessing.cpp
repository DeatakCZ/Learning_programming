#include "GatewayProcessing.h"
#include <iostream>
using namespace std;

void GatewayProcessing::process(Gateway& request)
{
    cout << "Objednavka cislo. " << request.getNumber() << endl;
    cout << "=============" << endl;
    cout << "Jmeno:   " << request.getFirstName() << " " << request.getLastName() << endl;
    cout << "Adresa:  " << request.getStreet() << " " << request.getHouseNumber() << endl;
    cout << "         " << request.getZip() << " " << request.getCity() << endl;
    cout << "         " << request.getCountry() << endl;
    cout << "=============" << endl;
    
    int numberOfProducts = request.countOfProducts();
    const string* const products = request.Products();
    const double* const prices = request.Prices();
    const int* const numbers = request.Quantities();
    
    for (int i = 0; i < numberOfProducts; i++)
    {
        cout << products[i] << endl << "  " << prices[i] << "Kc x " << numbers[i] << " ks" << endl;
    }

    double price = 0;
    for (int i = 0; i < numberOfProducts; i++)
        price += prices[i] * numbers[i];

    cout << endl << "Celkova cena " << price << "Kc" << endl;

    delete[] products;
    delete[] prices;
    delete[] numbers;
    
}

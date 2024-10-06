#pragma once

#include "Pocitadlo.h"


template<typename T>
class Zasobnik : public Pocitadlo
{
private:
    T* pole;
    int pocet_prvku=0;
    int velikost_pole=8;


public:
    
    Zasobnik(int velikost = 8);
    ~Zasobnik();
    template<int ZVETSENI = 2>
    //T& operator [](int index);
    //const T& operator [](int index) const;
    //int velikost() const;

    void vloz(T prvek);
    bool jePrazdny();
    T odeber();
    
};


template<typename T>
Zasobnik<T>::Zasobnik(int velikost)
{
    this->pole = new T[velikost];
}

template<typename T>
inline Zasobnik<T>::~Zasobnik()
{
    delete[] this->pole;
}

template<typename T>
template<int ZVETSENI>
void Zasobnik<T>::vloz(T prvek)
{
    if (this->pocet_prvku == this->velikost_pole)
    {
        this->velikost_pole = this->velikost_pole * ZVETSENI;
        T* temp = new T[this->velikost_pole];
        for (int i = 0; i < this->pocet_prvku; i++)
        {
            temp[i] = this->pole[i];
        }
        delete[] this->pole;
        this->pole = temp;

    }

    this->pole[this->pocet_prvku] = prvek;
    this->pocet_prvku++;
}

template<typename T>
bool Zasobnik<T>::jePrazdny()
{
    return (this->pocet_prvku == 0);
}

template<typename T>
T Zasobnik<T>::odeber()
{
    this->pocet_prvku--;
    return this->pole[this->pocet_prvku];
}


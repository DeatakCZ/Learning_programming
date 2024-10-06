#pragma once

#include <iostream>




template<typename T>
class Pole
{
private:
    T* pole;
    int pocet_prvku;
    int velikost_pole;
public:
    
    Pole(int velikost=8);
    ~Pole();
    template<int ZVETSENI = 2>
    void vlozNakonec(T prvek);
    Pole& operator = (const Pole& s);
    T& operator [](int index);
    const T& operator [](int index) const;
    int velikost() const;
    void BUBBLE();
};

template<typename T>
Pole<T>::Pole(int velikost) : velikost_pole(velikost), pocet_prvku(0)
{
    this->pole = new T[velikost];
}

template<typename T>
inline Pole<T>::~Pole()
{
    delete[] this->pole;
}


template<typename T>
template<int ZVETSENI>
void Pole<T>::vlozNakonec(T prvek)
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
inline Pole<T>& Pole<T>::operator=(const Pole<T>& s)
{
    if (this == &s)
        return *this;
    this->~Pole();
    this->pole = new T[s.pocet_prvku];
    for (int i = 0; i < s.pocet_prvku; i++)
        this->pole[i] = s->pole[i];
    this->pocet_prvku = s.pocet_prvku;
    this->velikost_pole = this->pocet_prvku;
    return *this;
}


template<typename T>
T& Pole<T>::operator[](int index)
{
    if (index < 0 || index >= this->pocet_prvku)
        index = 0;
    return this->pole[index];
}

template<typename T>
const T& Pole <T>::operator[](int index) const
{
    if (index < 0 || index >= this->pocet_prvku)
        index = 0;
    return this->pole[index];
}


template <typename T>
int Pole<T>::velikost() const
{
    return this->pocet_prvku;
}



template<typename T>
void Pole<T>::BUBBLE()
{
    int casovac = this->pocet_prvku;
    bool sorting = 1;
    T temp;
    while (sorting)
    {
        sorting = 1;
        for (int i = 0; i < casovac-1; i++)
        {
            if (pole[i] > pole[i + 1])
            {
                temp = pole[i];
                pole[i] = pole[i+1];
                pole[i+1] = temp;
                
                sorting = 0;
            }
        }
        casovac--;
    }
}



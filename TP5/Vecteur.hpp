#ifndef CPP5__VECTEUR_HPP
#define CPP5__VECTEUR_HPP

#include <iostream>
#include <fstream>
#include <cstring>
using data_type = double;
class Vecteur
{
    int _capacite;
    int _size;
    data_type *_tab;

public:
    Vecteur();
    Vecteur(int);
    ~Vecteur();
    int capacity() const;
    int size() const;
    void push_back(double d);
    Vecteur &operator=(const Vecteur &);
    double &operator[](int i);
};
#endif
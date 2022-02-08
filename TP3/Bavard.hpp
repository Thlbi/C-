#ifndef ZZ2_TP3_Bavard_HPP
#define ZZ2_TP3_Bavard_HPP
#include <iostream>

class Bavarde
{
    int _n = 0;

public:
    Bavarde(int n);

    Bavarde();

    ~Bavarde();

    int get();

    void afficher();
};
#endif
// Fichier Cercle.hpp
#ifndef ZZ2_TP2_Cercle_HPP
#define ZZ2_TP2_Cercle_HPP
#include "Forme.hpp"

class Cercle : public Forme
{
    // par défaut, tout est privé dans une "class"

    int _ordre;
    int _rayon;
public:
    Cercle();
    ~Cercle();
    Cercle(int rayon,COULEURS,Point);
    Cercle(int rayon,COULEURS,int x,int y);
    void setOrdre(int);
    int getRayon();
    void setRayon(int);
    std::string toString();
};
#endif
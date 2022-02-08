// Fichier Rectangle.hpp
#ifndef ZZ2_TP2_Rectangle_HPP
#define ZZ2_TP2_Rectangle_HPP
#include "Forme.hpp"

class Rectangle : public Forme
{
    // par défaut, tout est privé dans une "class"
    int _ordre;
public:
    Rectangle();
    Rectangle(int, int,int,int);
    void setOrdre(int);
    std::string toString();
};
#endif
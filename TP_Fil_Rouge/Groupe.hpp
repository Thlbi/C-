#ifndef ZZ2_TP3_ROUPE_HPP
#define ZZ2_TP3_ROUPE_HPP

#include <iostream>
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"


class Groupe:public Forme{
    static constexpr std::size_t size=10;
    static int compteur;
    int nb_f;
    Forme* formes[size];

    public:
        Groupe();
        ~Groupe();
        static int getCompteur();
        std::string toString();
        void addForme(Forme *f);

};

#endif
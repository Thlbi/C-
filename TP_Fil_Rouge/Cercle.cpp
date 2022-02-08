// Fichier Cercle.cpp

#include <iostream>      // Inclusion d'un fichier standard
#include "Cercle.hpp"
#include <string> // Inclusion d'un fichier du répertoire courant
Cercle::Cercle() : Forme(), _rayon(0)
{
    std::cout << "Pas d'arguments" << std::endl;
}

Cercle::Cercle(int rayon, COULEURS couleur,Point point) : Forme(rayon*2,rayon*2,couleur,point), _rayon(rayon)
{
    std::cout << "Avec arguments mais pas rayon" << std::endl;
}

Cercle::Cercle(int rayon, COULEURS couleur, int x,int y) : Forme(rayon*2,rayon*2,couleur,x,y), _rayon(rayon)
{
    std::cout << "Avec argument rayon" << std::endl;
}
Cercle::~Cercle(){

};

std::string Cercle::toString(){
    return "CERCLE "+std::to_string(_point.getX()) + " " +std::to_string(_point.getY()) +" "+ std::to_string(getLargeur())+ " " +std::to_string(getHauteur()) ;
}

void Cercle::setOrdre(int ordre){
    _ordre=ordre;
}

int Cercle::getRayon(){
    return _rayon;
}

void Cercle::setRayon(int rayon){
    _rayon=rayon;
}
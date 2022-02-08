#include <iostream>      // Inclusion d'un fichier standard
#include "Forme.hpp"
int Forme::_nbFormes=0;
Forme::Forme() : _w(0), _h(0), _couleur(COULEURS::BLEU),_point(Point())
{
    _id=_nbFormes;
    _nbFormes++;

}


Forme::Forme(int w, int h,COULEURS couleur,Point point) : _w(w), _h(h), _couleur(couleur), _point(point)
{
    _id=_nbFormes;
    _nbFormes++;
}
Forme::Forme(int w, int h,COULEURS couleur,int x, int y ) : _w(w), _h(h), _couleur(couleur), _point(x,y)
{
    _id=_nbFormes;
    _nbFormes++;
}
void Forme::setCouleur(COULEURS couleur){
    _couleur=couleur;
}
COULEURS Forme::getCouleur(){
    return _couleur;
}
Point & Forme::getPoint(){
    return _point;
}
void Forme::setX(int x){
    _point.setX(x);
}
void Forme::setY(int y){
    _point.setY(y);
}
int Forme::getId(){
    return _id;
}
int Forme::prochainId(){
    return _nbFormes;
}
int Forme::getLargeur(){
    return _w;
}
int Forme::getHauteur(){
    return _h;
}
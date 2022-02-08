#include "Groupe.hpp"

int Groupe::compteur = 0;

Groupe::Groupe(){
}
Groupe::~Groupe(){

}

int Groupe::getCompteur(){
    return compteur;
}



void Groupe::addForme(Forme * f){
    if (_point.getX()+_w<f->getPoint().getX()+f->getLargeur()){
        _w+=f->getPoint().getX()+f->getLargeur() - _point.getX()+_w;
    }
    if (_point.getY()+_h<f->getPoint().getY()+f->getHauteur()){
        _h+=f->getPoint().getY()+f->getHauteur()-_point.getY()+_h;
    }
    formes[compteur]=f;
    compteur+=1;        
}

std::string Groupe::toString(){
    std::string string = "Le groupe fait :";
    string += std::to_string(getHauteur());
    string += " ";
    string += std::to_string(getLargeur()); 
    string+=". Les formes sont :";
    for(int i=0; i<compteur;i++){
        string+=formes[i]->toString();
        string+=" ";
    }
    return string ;
}
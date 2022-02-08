#include "Groupe.hpp"

int Groupe::compteur = 0;

Groupe::Groupe():nb_f(0){
}
Groupe::~Groupe(){
    for(int i=0;i<compteur;i++){
        delete[] formes[i];
    } 
}

int Groupe::getCompteur(){
    return compteur;
}



void Groupe::addForme(Forme * f){
    std::cout << "Forme ajoutee " << std::endl;
}

std::string Groupe::toString(){
    std::string string = "Les formes sont :";
    for(int i=0; i<nb_f;i++){
        string+=formes[i]->toString();
        string+=" ";
    }
    return string ;
}
#include "Famille.hpp"

Famille::Famille(int taille):_tab(new Bavarde[taille]){
    std::cout<< "Construction de la Famille" << std::endl;
}
Famille::~Famille(){
    delete [] _tab;
}
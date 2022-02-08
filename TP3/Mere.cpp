#include "Mere.hpp"
#include <iostream>
int Mere::_value =0;
Mere ::Mere() 
{
    _value ++;
    std::cout << "Construction de Mere " << std::endl;
}
Mere ::Mere(std::string nom):_nom(nom) 
{
    _value ++;
    std::cout << "Construction de Mere " << std::endl;
}
Mere ::~Mere()
{
  std::cout << "Tais-toi Mere"  << std::endl;
}

int Mere::getCompteur(){
  return _value;
}
std::string Mere::getName(){
  return _nom;
}

void Mere::afficher(){
  std::cout<<"je suis une mère"<<std::endl;
}
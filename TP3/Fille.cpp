#include "Fille.hpp"
#include <iostream>
Fille ::Fille():Mere()
{
  std::cout << "Construction de Fille " << std::endl;
}
Fille ::Fille(std::string name):Mere(name)
{
  std::cout << "Construction de Fille " << std::endl;
}

Fille ::~Fille()
{
  std::cout << "Tais-toi Fille "  << std::endl;
}
int Fille :: get()
{
  return _value;
}
void Fille::afficher(){
  std::cout<<"je suis une fille"<<std::endl;
}
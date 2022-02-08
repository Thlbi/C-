
#include "Bavard.hpp"

Bavarde ::Bavarde(int n) : _n(n)
{

  std::cout << "Construction " << n << std::endl;
}
Bavarde ::Bavarde() : Bavarde(0){};

Bavarde ::~Bavarde()
{
  std::cout << "Tais-toi " << _n << std::endl;
}

int Bavarde :: get()
{
  return _n;
}

void Bavarde ::afficher()
{
  std::cout << "Affichage de " << _n << std::endl;
}

void fonction(Bavarde b)
{
  std::cout << "code de la fonction" << std::endl;
}


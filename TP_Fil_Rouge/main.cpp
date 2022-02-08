// Fichier main.cpp
#include <iostream> // Inclusion d'un fichier standard
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Groupe.hpp"
#include "Forme.hpp"
int main(int, char **)
{
    Rectangle r1(5, 5, 5, 5);
    Cercle *c1=new Cercle(6, COULEURS::JAUNE, 10,5);
    Cercle *c2=new Cercle(6, COULEURS::JAUNE, 10,5);

    std::cout << r1.toString() << std::endl;
    std::cout << c1->toString() << std::endl;
    std::cout << c2->toString() << std::endl;
    Groupe l;
    l.addForme(c1);
    l.addForme(&r1);
    std::cout<<l.toString()<<std::endl;
    delete c1;
    delete c2;
    return 0;
}

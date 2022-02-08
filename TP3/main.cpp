// Fichier main.cpp
#include <iostream> // Inclusion d'un fichier standard
#include "Bavard.hpp"
#include "Couple.hpp"
#include "Famille.hpp"
#include <cstdlib>
#include "Fille.hpp"
int main(int, char **)
{

    /*
    std::cout << "n = " << Bavarde(0).get() << std::endl;
    Bavarde b;
    Bavarde *p = new Bavarde(3);
    //fonction(b);
    const int TAILLE = 5;
    Bavarde tab1[TAILLE];
    Bavarde *tab2 = new Bavarde[TAILLE];

    for (int i = 0; i < TAILLE; ++i)
    {
        tab1[i].afficher();
        std::cout << i << std::endl;
        tab2[i].afficher();
    }

    delete p;
    delete[] tab2;    

   Couple c{3,4};
   
    Famille f(5);
    //Bavarde * b =(Bavarde *)malloc(sizeof(Bavarde));
    Bavarde *b = new Bavarde();
    std::cout << b->get() << std::endl;
    delete b;
    
    Fille f("Kenny");
    Mere m("Joe");

    std::cout << f.get() << std::endl;
    std::cout << m.getName() << std::endl;
    std::cout << f.getName() << std::endl;
    f.afficher();
    m.afficher();
    */

    Mere  *pm = new Mere("mere_dyn");
    Fille *pf = new Fille("fille_dyn");
    Mere  *pp = new Fille("fille vue comme mere");
    pm->afficher(); // affiche Mere
    pf->afficher(); // affiche Fille
    pp->afficher(); // affiche Fille

    delete pm;
    delete pf;
    delete pp;
    return 0;
}
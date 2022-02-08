#ifndef ZZ2_TP3_Fille_HPP
#define ZZ2_TP3_Fille_HPP
#include "Mere.hpp"

class Fille : public Mere
{
    public:
        Fille();
        Fille(std::string name);
        ~Fille();
        int get();
        void afficher() override ;
};
#endif
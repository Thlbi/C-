#ifndef ZZ2_TP3_Mere_HPP
#define ZZ2_TP3_Mere_HPP
#include <iostream>
class Mere
{

protected:
    static int _value;
    std::string _nom;

public:
    Mere();
    Mere(std::string nom);
    virtual ~Mere();
    int getCompteur();
    std::string getName();
    virtual void afficher();
};
#endif
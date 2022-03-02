#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
/*
class null_pointer : std::logic_error{
    public:
        null_pointer();
        null_pointer(const excpeption&);
        exception
};
*/
class Chaine
{
    int _capacite;
    char *_tab;

public:
    Chaine();
    ~Chaine();
    Chaine(const char *);
    Chaine(int);
    Chaine(const Chaine &c);
    char *c_str() const;
    int getCapacite() const;
    void afficher(std::ostream &o = std::cout) const;
    Chaine &operator=(const Chaine &);
    char &operator[](int i);
    char operator[](int i) const;
    class OutOfRangeException{};
};
std::ostream &operator<<(std::ostream &, const Chaine &);
Chaine operator+(const Chaine &c1, const Chaine &c2);
#endif

#include "Chaine.hpp"
#include <cstring>

Chaine::Chaine() : _capacite(-1), _tab(nullptr)
{
}

Chaine::Chaine(const char *inCS) : _capacite(strlen(inCS)), _tab(new char[_capacite + 1])
{
    strcpy(_tab, inCS);
}

Chaine::Chaine(int InCapacite) : _capacite(InCapacite), _tab(new char[InCapacite + 1])
{
    _tab[0] = 0;
}

Chaine::Chaine(const Chaine &c)
{
    std::cout << "Constructeur de copie appelé" << std::endl;
    _capacite = c.getCapacite();
    if (_capacite != -1)
    {

        _tab = new char[_capacite];
        strcpy(_tab, c._tab);
    }
    else
    {
        _tab = nullptr;
    }
}
Chaine::~Chaine()
{
    delete[] _tab;
}
int Chaine::getCapacite() const
{
    return _capacite;
}

char *Chaine::c_str() const
{
    return _tab;
}

void Chaine::afficher(std::ostream &o) const
{
    o << _tab;
}
Chaine &Chaine::operator=(const Chaine &c)
{
    if (&c != this)
    {
        delete[] _tab;
        _capacite = c._capacite;
        if (_capacite != -1)
        {
            _tab = new char[_capacite + 1];
            strcpy(_tab, c._tab);
        }
        else
        {
            _tab = nullptr;
        }
    }
    return *this;
}

std::ostream &operator<<(std::ostream &o, const Chaine &c)
{
    if (c.c_str())
    {
        o << c.c_str();
    }
    return o;
}

char &Chaine::operator[](int i)
{
    if ((i < 0) || (_capacite < i) || !_tab)
    {
        std::cerr << "Problème d'index" << std::endl;
        std::exit(1);
    }
    return _tab[i];
}

char Chaine::operator[](int i) const
{
    if ((i < 0) || (_capacite < i) || !_tab)
    {
        std::cerr << "Problème d'index" << std::endl;
        std::exit(1);
    }
    return _tab[i];
}

Chaine operator+(const Chaine &c1, const Chaine &c2)
{
    char *tab = new char[c1.getCapacite() + c2.getCapacite() + 1];
    strcpy(tab, c1.c_str());
    strcat(tab, c2.c_str());
    Chaine c(tab);
    delete[] tab;
    return c;
}
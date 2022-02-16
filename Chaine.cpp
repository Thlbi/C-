#include "Chaine.hpp"
#include <cstring>

Chaine::Chaine() : _capacite(-1), _tab(nullptr)
{
}

Chaine::Chaine(const char *inCS) : _capacite(strlen(inCS)), _tab(new char[_capacite])
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
            _tab = new char[_capacite];
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
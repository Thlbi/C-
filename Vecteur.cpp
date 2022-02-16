#include "Vecteur.hpp"

Vecteur::Vecteur() : Vecteur(10)
{
}

Vecteur::Vecteur(int cap) : _capacite(cap), _size(0), _tab(new data_type[cap + 1])
{
}
Vecteur::~Vecteur()
{
    delete[] _tab;
}
int Vecteur::capacity() const
{
    return _capacite;
}
int Vecteur::size() const
{
    return _size;
}
void Vecteur::push_back(data_type d)
{
    data_type *temp;
    if (_size >= _capacite)
    {
        _capacite = _capacite * 2;
        temp = new data_type(_capacite);
        std::copy(_tab, _tab + _size, temp);
        delete[] _tab;
        _tab = temp;
    }
    _tab[_size] = d;
    _size++;
}

Vecteur &Vecteur::operator=(const Vecteur &c)
{
    if (&c != this)
    {
        delete[] _tab;
        _capacite = c._capacite;
        _size = c._size;
        _tab = new data_type[_capacite];
        std::copy(c._tab, c._tab + _size, _tab);
    }
    return *this;
}
double &Vecteur::operator[](int i)
{
    if ((i < 0) || (_capacite < i) || !_tab)
    {
        std::cerr << "Problème d'index" << std::endl;
        std::exit(1);
    }
    return _tab[i];
}
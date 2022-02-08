// Fichier Rectangle.cpp

#include <iostream>      // Inclusion d'un fichier standard
#include "Rectangle.hpp"
#include <string> // Inclusion d'un fichier du répertoire courant
Rectangle::Rectangle() : Forme(0,0,COULEURS::JAUNE,0,0)
{
    std::cout << "Pas d'arguments" << std::endl;
}

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(w,h,COULEURS::JAUNE,x,y)
{
    std::cout << "Avec arguments" << std::endl;
}
Rectangle::~Rectangle(){
}
/*
int Rectangle::getX()
{
    return _x;
}
int Rectangle::getY()
{
    return _y;
}
int Rectangle::getW()
{
    return _w;
}
int Rectangle::getH()
{
    return _h;
}
void Rectangle::setX(int x)
{
    _x = x;
}
void Rectangle::setY(int y)
{
    _y = y;
}
void Rectangle::setW(int w)
{
    _w = w;
}
void Rectangle::setH(int h)
{
    _h = h;
}
*/
void Rectangle::setOrdre(int ordre){
    _ordre=ordre;
}
std::string Rectangle::toString(){
    return "RECTANGLE "+ std::to_string(_point.getX()) + " " +std::to_string(_point.getY()) +" "+std::to_string(_w) +" "+std::to_string(_h);
}
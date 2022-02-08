#include <iostream>      // Inclusion d'un fichier standard
#include "Point.hpp"
#include <string>
Point::Point() : _x(0), _y(0)
{
    std::cout << "Pas d'arguments" << std::endl;
}
Point::~Point()
{
}


Point::Point(int x, int y) : _x(x), _y(y)
{
}
int Point::getX(){
    return _x;
}

int Point::getY(){
    return _y;
}
void Point::setX(int x){
    _x=x;
}
void Point::setY(int y){
    _y=y;
}
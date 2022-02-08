#ifndef ZZ2_TP3_POINT_HPP
#define ZZ2_TP3_POINT_HPP
#include <iostream>


class Point{
    int _x;
    int _y;
    public:
        Point();
        Point(int,int);
        ~Point();
        int getX();
        int getY();
        void setX(int);
        void setY(int);
};
#endif
#ifndef ZZ2_TP3_A_HPP
#define ZZ2_TP3_A_HPP
#include <iostream>

class B;

class A
{
    int _i;

    public:
        void exec(int);
        void send(B*);
        A(int);
        ~A();
        int get();
};
#endif
#ifndef ZZ2_TP3_B_HPP
#define ZZ2_TP3_B_HPP
#include <iostream>

class A;

class B
{
    int _j;

    public:
        void exec(int);
        void send(A*);
        B(int);
        ~B();
        int get();
};
#endif


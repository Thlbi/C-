// Fichier main.cpp
#include <iostream> // Inclusion d'un fichier standard
#include "B.hpp"
#include "A.hpp"

int main(int, char **)
{
    A *a = new A(5);
    B *b=new B(5);

    b->send(a);
    a->send(b);

    std::cout<< "I= "<<a->get()<<std::endl; 
    std::cout<< "J= "<<b->get()<<std::endl; 
    return 0;
}

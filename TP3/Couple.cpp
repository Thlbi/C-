#include "Couple.hpp"

Couple::Couple(int x, int y):b1(Bavarde(x)), b2(Bavarde(y)){
    std::cout<< "Construction du Couple " << std::endl;
}
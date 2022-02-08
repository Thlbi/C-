#include <iostream>
#include <string>

int main(int, char **)
{
    std::string chaine1;
    std::string chaine2;

    std::cout << "Rentrez vos deux chaines :" << std ::endl;
    std::cin >> chaine1;
    std::cin >> chaine2;
    if (chaine1 < chaine2)
    {
        std::cout << "La plus petite est " << chaine1 << std::endl;
    }
    else
    {
        std::cout << "La plus petite est " << chaine2 << std::endl;
    }
    std::cout << "La taille de la chaine 1 est " << chaine1.length() << std::endl;
    std::cout << "La taille de la chaine 2 est " << chaine2.length() << std::endl;
    return 0;
}
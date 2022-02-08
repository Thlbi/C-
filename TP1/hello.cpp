#include <iostream>
#include <string>

//using namespace std; // pas besoin d'utiliser std::string mais direct string
int main(int, char **)
{
    int i;
    std::string prenom, nom;
    int age;
    for (i = 0; i < 12; ++i)
        std::cout << "Bonjour les ZZ" << 2 << std::endl;

    std::cout << "Quel est votre prénom ?" << std::endl;
    std::cin >> prenom;
    std::cout << "Quel est votre nom ?" << std::endl;
    std::cin >> nom;
    std::cout << "Quel est votre age ?" << std::endl;
    std::cin >> age;
    std::cout << "Bonjour " << prenom << nom << ", votre pseudo est "<< prenom << ":"<< nom << std::endl;

    return 0;
}

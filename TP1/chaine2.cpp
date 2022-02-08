#include <iostream>

int main()
{

    //char s[10];
    std::string s; //meilleur solution 
    // char *      s; pas d'allocution mémoire

    std::cin >> s;

    std::cout << "#" << s << "#" << std::endl;
    for (int i = 0; i < 10; ++i)
        std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

    return 0;
}

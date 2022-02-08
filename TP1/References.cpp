#include <iostream>
#include <string>

int main(int, char **)
{

    int a = 5;
    int &r = a;

    std::cin >> r;
    std::cout << a;
    std::cin >> a;
    std::cout << r;
}
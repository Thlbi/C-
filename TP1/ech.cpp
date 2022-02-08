#include <iostream>
#include <string>

void echange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void echange(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(int, char **)
{
    int a = 3;
    int b = 6;
    int &c = a;

    std::cout << a << " " << b << " " << c << std::endl;

    echange(&a, &b);
    std::cout << "echange pointeur: "<< a << " " << b << " " << c << std::endl;

    echange(a, b);
    std::cout << "echange références: "<< a << " " << b << " " << c << std::endl;
}
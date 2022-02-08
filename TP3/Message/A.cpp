#include "A.hpp"
#include "B.hpp"

A::A(int i):_i(i){}
A::~A(){}

void A::exec(int i){
    _i+=i;
}
void A::send(B* b){
    b->exec(5);
}
int A :: get()
{
  return _i;
}
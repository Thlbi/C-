#include "B.hpp"
#include "A.hpp"

B::B(int j):_j(j){}
B::~B(){}

void B::exec(int j){
    _j+=j;
}
void B::send(A* a){
    a->exec(5);
}

int B :: get()
{
  return _j;
}
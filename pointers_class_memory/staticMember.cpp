/*
 * staticMember.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp


#include <iostream>


using namespace std;

class myClass
{
  public:
    static int n;
    myClass ()
    {
      n++;
    };
};

int myClass::n=0;

int main ()
{
  myClass a;
  std::cout << a.n << '\n';

  myClass b[7];
  std::cout << b->n << '\n';

  myClass * pointer;
  pointer=new myClass;

  std::cout << pointer->n << '\n';
  delete pointer;

  myClass c;
  std::cout << c.n << '\n';

  return 0;
}

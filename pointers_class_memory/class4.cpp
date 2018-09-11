/*
 * class4.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>

using namespace std;
//g++ -std=c++14 -o temp sort.cpp

class myVector
{
  public:
    int x;
    int y;
    myVector(){};
    myVector (int a,int b) ;
    myVector operator + (const myVector & tmp);
};

myVector::myVector(int a,int b)
{
  x=a;
  y=b;
}
myVector myVector::operator+ (const myVector& tmp)
{
  myVector aux;
  aux.x = x + tmp.x;
  aux.y = y + tmp.y;
  return aux;
}

int main ()
{
  myVector myObject1(2,2);
  myVector myObject2(3,2);
  myVector myObject3;

  myObject3=myObject1.operator+(myObject2);
  std::cout << myObject3.x << '\n';
  std::cout << myObject3.y << '\n';

  return 0;
}

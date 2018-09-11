/*
 * class5.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <iostream>
//g++ -std=c++14 -o temp sort.cpp
using namespace std;

class MyClass
{
    int x;
  public:
    MyClass(int val) : x(val) {}
    const int& get() const {return x;}
};

void print (const MyClass& arg)
{
  std::cout << arg.get() << '\n';
}

int main()
{
  MyClass foo (10);
  //print(foo);
  std::cout << foo.get() << '\n';
  print(foo);

  return 0;
}

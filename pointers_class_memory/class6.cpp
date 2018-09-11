/*
 * class6.cpp
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
    int& get() {return x;}
};

int main()
{
  MyClass foo (10);
  const MyClass bar (20);

  std::cout << foo.get() << '\n';

  std::cout << "/* message */" << '\n';
  foo.get() = 55;         // ok: get() returns int&
  //bar.get() = 25;        // not valid: get() returns const int&

  std::cout << foo.get() << '\n';
  std::cout << bar.get() << '\n';

  return 0;
}

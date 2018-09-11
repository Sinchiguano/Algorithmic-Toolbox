/*
 * class7.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <string>
//g++ -std=c++14 -o temp sort.cpp

using namespace std;


class Example4
{
    string* ptr;

  public:
    // constructors:
    Example4() : ptr(new string) {}
    Example4 (const string& str) : ptr(new string(str)) {}

    // destructor:
    ~Example4 () {delete ptr;}

    // access content:
    const string& content() const {return *ptr;}
};

int main ()
{
  //Example4 myObject1;

  Example4 myObject2("CESAR");
  std::cout << myObject2.content() << '\n';




  return 0;
}

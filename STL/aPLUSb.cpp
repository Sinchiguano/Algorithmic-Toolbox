/*
 * aPLUSb.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

// #include "aPLUSb.h"
#include <iostream>


//g++ -std=c++14 -o temp sort.cpp


int main(int argc, char const *argv[])
{
  /* code */
  std::int64_t a{0};
  std::int64_t b{0};
  std::cout<<"Sinchiguano Cesar\n";
  std::cout<<"Enter the first number:\n";
  std::cin>>a;
  std::cout<<"Enter the second number:\n";
  std::cin>>b;
  std::int64_t c{0};
  c=a+b;
  std::cout<<"The sum of the both numbers is:\n";
  std::cout<<c<<std::endl;

  return 0;
}

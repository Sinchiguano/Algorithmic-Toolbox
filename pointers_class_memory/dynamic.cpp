/*
 * dynamic.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp

#include <iostream>
#include <new>

using namespace std;

int main ()
{
  int i;
  int * p;

  cout << "How many numbers would you like to type? ";
  cin >> i;

  p= new (nothrow) int[i];
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (auto n =0; n<i; n++)
    {
      std::cout << "Enter number: ";
      std::cin >> p[n];
    }
    std::cout << "You have entered: ";
    for (auto n=0; n<i; n++){ std::cout << p[n] << ", ";}
    std::cout << "\n/* message */" << '\n';
    delete[] p;
  }
  return 0;
}

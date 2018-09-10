/*
 * iota.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "iota.h"

#include<iostream>
#include<numeric>
#include<vector>

using namespace std;
//g++ -std=c++14 -o temp sort.cpp

int main()
{
  std::vector<int> v(10);
  /* now vector v is : 0,0,0,0,0,0,0,0,0,0  */

  for (auto i=v.begin();i!=v.end();i++)
  {
    std::cout << *i << '\n';
  }

  std::iota(v.begin(), v.end(), 10 );

  for (auto i=v.begin();i!=v.end();i++)
  {
    std::cout << *i << '\n';
  }

   /* now the vector v is 10,11,12,13,14,15,16,17,18,19  */
}

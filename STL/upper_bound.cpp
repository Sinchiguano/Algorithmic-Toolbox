/*
 * upper_bound.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "upper_bound.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;


//g++ -std=c++14 -o temp sort.cpp
int main ()
{

  std::vector<int> myvector={1,2,2,3,4,4,5,6,7,8,10,45};

  std::vector<int>::iterator it1,it2;

  it1 = upper_bound(myvector.begin(), myvector.end(), 6);

  std::cout<<*it1<<std::endl;


  it2 = upper_bound(myvector.begin(), myvector.end(), 4);

  std::cout<<*it2<<std::endl;


  return 0;

  /* points to seventh element in v */
}

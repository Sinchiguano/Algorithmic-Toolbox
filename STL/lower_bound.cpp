/*
 * lower_bound.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{

  std::vector<int> myvector={1,2,2,3,4,4,5,6,7,8,10,45};

  std::vector<int>::iterator it1,it2;



  it1 = lower_bound(myvector.begin(), myvector.end(), 4);
  it2 =lower_bound(myvector.begin(), myvector.end(), 10);
  std::cout << "/* message */ " << *it1<<'\n';
  std::cout << "/* message */ " << *it2<<'\n';



}

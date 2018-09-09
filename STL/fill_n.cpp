/*
 * fill_n.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

// #include "fill_n.h"
// //g++ -std=c++14 -o temp sort.cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main ()
{
  // std::vector<int> v1(10);
  // for (size_t i = 0; i < v1.size(); i++) {std::cout << "==" <<v1[i]<< '\n';}
  //
  // fill(v1.begin(), v1.end(), 9);
  //
  // for (size_t i = 0; i < v1.size(); i++) {std::cout << "##" <<v1[i]<< '\n';}
  //
  //
  //
  // fill(v1.begin(), v1.end() - 3, 8);
  // for (size_t i = 0; i < v1.size(); i++) {std::cout << "//" <<v1[i]<< '\n';}


  std::cout << "]]]]]]]]]]]]]]]]]]]]]]]]" << '\n';

  std::vector<int> values = {1,2,3,4,5,6,7,8,9};

  for (size_t i = 0; i < values.size(); i++) {std::cout << "/* message */ " <<values[i]<< '\n'; }

  std::vector<int>::iterator i,j;
  i=values.begin();
  j=values.end();

  std::cout << "]]]]]]]]]]]]]]]]]]]]]]]]" << '\n';
  fill_n(i, 4 ,20);
  for (std::vector<int>::iterator l=values.begin(); l !=values.end(); l++)
  {
    std::cout << "/* message */ " <<*l<< '\n';
  }

}

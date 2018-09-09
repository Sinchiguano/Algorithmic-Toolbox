/*
 * unique.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <algorithm>
#include <vector>
#include <utility>
#include<iostream>

using namespace std;

//g++ -std=c++14 -o temp sort.cpp

int main ()
{
  std::vector<int> values = {10,5,5,5,9,6,6,4,4};
  for (size_t i = 0; i < values.size(); i++)
  {
    std::cout << values[i] << '\n';
  }
  std::vector<int>::iterator i,j,it;

  i=values.begin();
  j=values.end();

  it = unique(i,j);

  std::cout << "/* message */" << '\n';
  std::cout << *it << '\n';
  std::cout << "/* message */" << '\n';
  for (size_t i = 0; i < values.size(); i++)
  {
    std::cout << values[i] << '\n';
  }

  /* - indicates that the elements are removed from the vector
  and next elements are shifted to their position */

  /* now it is pointing to the first occurrence of the “-“ in
  the vector , i.e the position next to the last element (4) */


  return 0;
}

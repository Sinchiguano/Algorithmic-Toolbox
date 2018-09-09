/*
 * rotate.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//g++ -std=c++14 -o temp sort.cpp
int main ()
{
  std::vector<int>a;
  for (size_t i = 1; i < 9; i++)
  {
      a.push_back(i);
  }
  std::vector<int>::iterator i,m,j;
  i=a.begin();
  j=a.end();

  std::cout << "/* message */" << '\n';
  for (size_t i = 0; i < a.size(); i++){std::cout << a[i]; }
  std::cout << "\n/* message */" << '\n';

  rotate(i,i+3,j);

  for (size_t i = 0; i < a.size(); i++){std::cout << a[i]; }
  std::cout << "\n/* message */" << '\n';
}

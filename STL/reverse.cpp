/*
 * reverse.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <algorithm>
#include <vector>

//g++ -std=c++14 -o temp sort.cpp

using namespace std;

int main ()
{
  // std::vector<int> a = {1,5,4,9,8,6,1,3,5,4};
  // std::cout << "/* message */" << '\n';
  // for (size_t i = 0; i < a.size(); i++) {std::cout << a[i]<<" "; }
  //
  //
  //
  // reverse(a.begin(), a.end());
  //
  // std::cout << "\n/* message */" << '\n';
  //
  // for (size_t i = 0; i < a.size(); i++) {std::cout << a[i]<<" "; }
  //
  // std::cout << " " << '\n';
  //
  // reverse(a.begin(), a.begin()+5);
  //
  // std::cout << "\n/* message */" << '\n';
  //
  // for (size_t i = 0; i < a.size(); i++) {std::cout << a[i]<<" "; }
  //
  // std::cout << " " << '\n';


  std::vector<int> values;

  for (auto i = 0; i<10; i++){values.push_back(i);}

  std::cout << "/* message */" << '\n';

  for (size_t p = 0; p < values.size(); p++){std::cout << "===>>" << values[p]<<'\n';}

  std::vector<int>::iterator i,j;

  i=values.begin();
  j=values.end();

  std::vector<int> v2;
  v2.resize(values.size());


  reverse_copy(values.begin(), values.begin()+5, v2.begin());

  for (size_t i = 0; i < v2.size(); i++)
  {
    std::cout << v2[i] <<" ";
  }

  std::cout << '\n';

}

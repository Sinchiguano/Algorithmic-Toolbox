/*
 * swap.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "swap.h"
//g++ -std=c++14 -o temp sort.cpp


#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main ()
{
  int a = 6;
  int b = 9;
  std::cout << a<<b << '\n';
  swap(a,b);
  /* a = 9 , b=6 */
  std::cout << a<<b << '\n';

  /* you can also swap an entire container with swap */
  std::cout << "/* message */" << '\n';
  std::vector<int> v, c;
  for(int j=0; j < 10; j++)
  {
    v.push_back(j);
    c.push_back(j*2);
  }
  std::cout << "v" <<"-"<< "c" <<'\n';
  for (size_t i = 0; i < v.size(); i++) {std::cout<<v[i] << "-" <<c[i]<< '\n'; }

  std::cout << "/* message */" << '\n';

  std::swap_ranges(v.begin(), v.begin()+5, c.begin());

  /* swaps the first five element of
  vector v by the elements of vector c */

  for(vector<int>::iterator i = v.begin() ; i!= v.end() ; i++){std::cout<< *i <<" ";}
  std::cout << "" << '\n';
  for(vector<int>::iterator k = c.begin() ; k!= c.end() ; k++){ cout<<*k<<" ";}
  std::cout << "" << '\n';


}

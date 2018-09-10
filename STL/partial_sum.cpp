/*
 * partial_sum.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp


#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int myoperator(int a, int b)
{
  return a*b;
}

int main()
{
  std::vector<int> a= {1,2,3,4,5};
  std::vector<int> b;
  std::vector<int>::iterator i,j;
  i=a.begin();
  j=a.end();

  for (i;i!=j; i++) {std::cout << *i << '\n'; }

  b.resize(a.size());
  std::cout << "/* message */" << '\n';
  std::partial_sum(a.begin(), a.end(), b.begin());

  for (auto i=b.begin();i!=b.end(); i++) {std::cout << *i << '\n'; }

  partial_sum(a.begin(), a.end(), b.begin(), myoperator);

  std::cout << "/* message */" << '\n';

  for (auto i=b.begin();i!=b.end(); i++) {std::cout << *i << '\n'; }

}

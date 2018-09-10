/*
 * accumulate.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

// #include "accumulate.h"

//g++ -std=c++14 -o temp sort.cpp

#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int myoperator(int a, int b )
{
    return a*b;
}
int mineSum(int a,int b)
{
  return a+b;
}
int main()
{
  std::vector<int> v;

  for(int p = 0 ; p < 10; p++) {v.push_back(p);}

  // std::cout << "size: " << v.size() << "\n";
  // std::cout << "capacity: " << v.capacity() << "\n";

  v.resize(10);
  v.shrink_to_fit();

  // std::vector<int>::iterator i,j;
  // i=v.begin();
  // j=v.end();
  //
  // for (i;i!=j;i++) {std::cout << *i << '\n';  }
  // // std::cout << "size: " << v.size() << "\n";
  // // std::cout << "capacity: " << v.capacity() << "\n";



  std::vector<int>::iterator i,j;
  i=v.begin();
  j=v.end();
  for (i;i!=j;i++) {std::cout << *i << '\n';  }

  //////////////////////////////////////////////
  std::cout << "/* message */" << '\n';
  int aux=0;
  for (size_t i = 0; i < v.size(); i++)
  {
    aux=aux+v[i];
    std::cout << aux << '\n';
  }
  std::cout << "result: " <<aux<< '\n';

  /////////////////////////////////////////////
  //It didn't work with vector with array all is well...
  int res=0;
  accumulate(i, j, res, myoperator) ;
  std::cout << res << '\n';

  std::cout << "/* message */" << '\n';

  //With arrays works properly!!!
  int init = 100;
  int numbers[] = {10,20,30};

  std::cout << "using default accumulate: ";
  std::cout << std::accumulate(numbers,numbers+3,init);
  std::cout << '\n';

}

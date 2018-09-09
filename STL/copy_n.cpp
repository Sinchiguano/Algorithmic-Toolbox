/*
 * copy_n.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

// #include "copy_n.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



//g++ -std=c++14 -o temp sort.cpp
int main ()
{
  std::vector<int> v1,v2;

  v1.push_back(2);
  v1.push_back(4);
  v1.push_back(6);
  v1.push_back(8);
  v1.push_back(10);

  std::vector<int>::iterator i,j;
  i=v1.begin();
  std::cout << "/* message */" <<*i<< '\n';
  j=v1.end();

  for (i; i !=j; i++)
  {
    std::cout << *i<< '\n';
    v2.push_back(*i);
  }

  std::cout << "##################" << '\n';

  for (size_t i = 0; i < v2.size(); i++)
  {
  std::cout << "/* message */ " <<v2[i] <<'\n';
  }
  return 0;
}

  // std::vector<int> vvector;
  // int summ (0);
  //
  // for (auto i=1;i<=10;i++) vvector.push_back(i);
  //
  // //true if the container size is 0, false otherwise.
  // while (!vvector.empty())
  // {
  //    summ += vvector.back();
  //    vvector.pop_back();
  // }
  //
  // std::cout << "total: " << summ << '\n';
  //
  // return 0;

/////////////////////////////////////////////////////////


  // std::vector<int> mvector;
  //
  // mvector.push_back(6);
  //
  // while (mvector.back() != 0)
  // {
  //   mvector.push_back ( mvector.back() -1 );
  //
  // }
  //
  // std::cout << "myvector contains:";
  // for (unsigned i=0; i<mvector.size() ; i++)
  // {
  //   std::cout << ' ' << mvector[i];
  // }
  // std::cout << '\n';

  // return 0;

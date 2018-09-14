/*
 * vectors.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
// vtest.cpp: simple program to demonstrate basic usage of Vector class

// #include "Vector.h"
#include <iostream>
#include<vector>
#include <array>
#include <utility>



#include <boost/algorithm/minmax.hpp>
#include <boost/tuple/tuple.hpp>

#include <boost/algorithm/minmax_element.hpp>



//g++ -std=c++14 -o temp sort.cpp

int main(int argc, char const *argv[])
{
  // /* code */
  // int i = 2;
  // int j = 1;
  //
  // boost::tuples::tuple<const int&, const int&> temp = boost::minmax(i, j);
  //
  // std::cout << temp.get<0>() << '\n';
  // std::cout << temp.get<1>() << '\n';

  typedef std::array<int, 4> ARRAY;
  ARRAY tmpARRAY={2, 3, 0, 1};


  auto k=tmpARRAY.begin();
  auto l=tmpARRAY.end();


  for (auto i=tmpARRAY.begin(); i!=tmpARRAY.end() ;i++)
  {
      std::cout << *i << '\n';
  }

  std::pair< std::array<int, 4> ::iterator,std::array<int, 4> ::iterator> tempITERATOR=
    boost::minmax_element(k,l);

  std::cout << *tempITERATOR.first << '\n';
  std::cout << *tempITERATOR.second << '\n';

  std::cout << "/* message */" << '\n';
  std::cout << "/* message */" << '\n';
  ////////////////////////////////////
  ///////////////VECTORS////////////
  ///////////////////////////////////
  std::vector<int> v={2, 3, 0, 1};

  std::vector<int>::iterator m=v.begin();
  std::vector<int>::iterator n=v.begin();

  for (auto i=v.begin(); i!=v.end() ;i++)
  {
      std::cout << *i << '\n';
  }

  std::pair< std::vector<int>::iterator,std::vector<int>::iterator> it=
    boost::minmax_element(m,n);

  std::cout << *it.first << '\n';
  std::cout << *it.second << '\n';


  return 0;
}

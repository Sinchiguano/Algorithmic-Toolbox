/*
 * lambda.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <boost/lambda/lambda.hpp>
#include <boost/lambda/if.hpp>
#include <vector>
#include <algorithm>
#include <iostream>


//g++ -std=c++14 -o temp sort.cpp

int main()
{
  std::vector<int> v={1, 3, 2};
  std::vector<int>::iterator i,j;
  i=v.begin();
  j=v.end();

  // std::for_each(i,j,
  //   std::cout << boost::lambda::_1 << "\n");

    /*
    boost::lambda::_1 is a placeholder that creates a lambda function that expects
    one parameter. The number in the placeholder determines the number of expected
    parameters, so boost::lambda::_2 expects two parameters and boost::lambda::_3 expects
    three parameters. Boost.Lambda only provides these three placeholders. The lambda function in Example 43.1 uses boost::lambda::_1 because std::for_each() expects a unary function.
    */

  std::for_each(i,j,
    boost::lambda::if_then(boost::lambda::_1 >2,
      std::cout <<boost::lambda::_1 << "\n"));
}

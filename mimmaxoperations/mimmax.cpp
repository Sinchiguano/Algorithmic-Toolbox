/*
 * mimmax.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp

#include<iostream>
#include<algorithm>
#include<numeric>
#include <array>
#include <utility>


using namespace std;

int main()
{
  std::pair<int,int> p;
  p = minmax(2,3);
  /* now p.first = 2 ( smaller element )
  And p.second = 3 ( larger element )   */
  std::cout << p.first << '\n';
  std::cout << p.second << '\n';


  std::pair<string,string> p2;

  p2 = minmax("abcd" , "abce");
  /* p2.first = "abcd" ( lexicographically smaller string )
   And p2.second = "abce" (lexicographically larger string )  */

  std::cout << p2.first << '\n';
  std::cout << p2.second << '\n';

  p =  minmax(2,2);
  /* p.first = p.second = 2 , */

  /* minmax can also be used for number of elements */

  p = minmax({2,6,5,4,9,8});
  /* now p.first = 2 ( smaller element )
  And p.second = 9 ( larger element )   */
  std::cout << p.first << '\n';
  std::cout << p.second << '\n';
  /*'''
  This method returns a pair of iterator where first element of the pair points to
  the smallest element in the range [first,last] and second element of the pair points
  to the largest element in the range [first,last].
  */
  std::array<int,7> foo ={3,7,2,9,5,8,6};

  auto aux = minmax_element(foo.begin(), foo.end());
  std::cout << *aux.first << '\n';
  std::cout << *aux.second << '\n';

  return 0;


}

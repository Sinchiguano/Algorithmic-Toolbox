/*
 * lexicographical_compare.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<array>

using namespace std;

bool myoperator(char a , char b)
{
    return a > b;

}

int main()
{
  char s[] = "nkvaio";
  char x[] = "xyzabc";
  for (size_t i = 0; i <6 ;i++) {
    std::cout << s[i] << '\n';
  }
  std::cout << "/* message */" << '\n';
  std::cout<< lexicographical_compare(s, s+6, x, x+6, myoperator);
  std::cout << "\n/* message */" << '\n';
  //
  //
  // std::vector<std::string> tmp;//="nkvaio";
  // std::string p="Cesar";
  // tmp.push_back(p);
  //
  // std::array<string,4> mystring={"nkvaio","xyzabc"};
  // cout >> lexicographical_compare(s, s+6, x, x+6, myoperator);


  /*  prints 0 , Boolean false , since a[4] is not less than b[4]  */
}

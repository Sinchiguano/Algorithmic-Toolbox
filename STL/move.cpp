/*
 * move.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */


//g++ -std=c++14 -o temp sort.cpp

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
  string a = "nicky";
  string b = "Vicky";

  std::vector<string> name;

  std::cout << "/* a */" << '\n';
  std::cout << a << '\n';
  std::cout << "/* b */" << '\n';
  std::cout << b << '\n';

  // inserts "nicky" in name , a is still = nicky
  name.push_back(a);
  // inserts "Vicky" in name , b is now NULL
  name.push_back(move(b));


  std::vector<std::string>::iterator i,j;
  i=name.begin();
  j=name.end();

  for ( i;i!=j;i++)
  {
  std::cout << "##" <<*i<< '\n';
  }
  std::cout << "/* a */" << '\n';
  std::cout << a << '\n';
  std::cout << "/* b */" << '\n';
  std::cout << b << '\n';

  return 0;

}

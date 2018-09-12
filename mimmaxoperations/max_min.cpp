/*
 * max_min.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include<iostream>
#include<algorithm>

//g++ -std=c++14 -o temp sort.cpp


using namespace std;

/*compare function for strings*/

bool myMaxCompare(string a, string b)
{
   return (a.size() < b.size());
}


bool myMinCompare(string a, string b)
{
   return (a.size() > b.size());
}

int main()
{
  int x=4, y=5;

  std::cout << std::max(x,y) << '\n';
  std::cout << std::max(2.345, 5.23)<<endl;
  std::cout << std::min(2.312, 7.434);
  std::cout << "\n/* message */" << '\n';



  std::string s = "cesar";
  std::string t = "sinchiguano";

  std::string s1 = std::max(s, t, myMaxCompare);
  std::cout << s1 << '\n';

  std::string s2 = std::min(s, t, myMaxCompare);
  std::cout << s2 << '\n';


}

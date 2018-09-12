/*
 * elements_maxmin.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */



//g++ -std=c++14 -o temp sort.cpp

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool myMaxCompare(int a, int b)
{
   return (a < b);
}

bool myMinCompare(int a, int b)
{
   return (a < b);
}

int main()
{
  std::vector<int> values = { 1,5,4,9,8,10,6,5,1};
  std::vector<int>::iterator i,j,temp;
  i=values.begin();
  j=values.end();

  temp=max_element(i,j);
  std::cout << "/* message */" << '\n';
  std::cout <<  *temp<< '\n';


  temp=min_element(i,j);
  std::cout << "/* message */" << '\n';
  std::cout <<  *temp<< '\n';

  /* using mycompare function */
  std::cout<< *max_element(i,j, myMaxCompare);
  std::cout << "/* message */" << '\n';

  std::cout<< *min_element(i,j, myMinCompare);
  std::cout << "/* message */" << '\n';

}

/*
 * equal_range.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <utility>      // std::pair

using namespace std;

//IDE integrated development enviroment
//Compile my code
//g++ -std=c++14 -o temp sort.cpp


bool compare_function (int i,int j)
{
   return (i <= j);
 }

int main ()
{
  cout<<"  //#####################################\n";
  std::vector<int> v={1,1,1,2,2,2,3,3,6,7,7,7,7,7,8,9};

  std::vector<int>::iterator i=v.begin();
  std::vector<int>::iterator j=v.end();

  /*
  equal_range
  equal_range() returns a pair of iterators where the iterators represent
  the sub range of elements in the given range which are equal to the given value
  or satisfy the compare_function. The given range should be already sorted.
  There are two variation of equal_range :
  */

  //when we are dealing with iterators, we are dealing with pointers....
  std::pair<std::vector<int>::iterator,std::vector<int>::iterator> tmp;
  tmp = equal_range (i, j, 2);
  std::cout<<*tmp.first<<std::endl;
  std::cout<<*tmp.second<<std::endl;


  cout<<"  //#####################################\n";
  std::pair<std::vector<int>::iterator,std::vector<int>::iterator> sub_range;
  sub_range = equal_range (v.begin(), v.end(), 6, compare_function);
  std::cout<<*sub_range.first<<std::endl;
  std::cout<<*sub_range.second<<std::endl;


  //As reference...
  // std::pair<int,char> foo (10,'a');
  // std::pair<int,char> bar (90,'z');
  // foo.swap(bar);
  // std::cout << "foo contains: " << foo.first;
  // std::cout << " and " << foo.second << '\n';
  return 0;
}

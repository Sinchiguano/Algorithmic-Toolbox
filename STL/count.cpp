/*
 * count.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <algorithm>
#include <vector>

#include<array>


using namespace std;

//g++ -std=c++14 -o temp sort.cpp
int main ()
{
  //first way
  int values[] = {5,1,6,9,10,1,12,5,5,5,1,8,9,7,46};
  int count_5 = count(values, values+15, 5);
  std::cout << "five:" <<count_5<< '\n';

  //second way
  std::array<int,15> myarray = {5,1,6,9,10,1,12,5,5,5,1,8,9,7,46};

  int count_1 = count(myarray.begin(), myarray.end(), 1);
  std::cout << "one :" << count_1<<'\n';

  //third one
  std::vector<int> myvector={5,1,6,9,10,1,12,5,5,5,1,8,9,7,46};
  std::vector<int>::iterator it1,it2;

  it1=myvector.begin();
  it2=myvector.end();

  int count_9= count(it1, it2,9);
  std::cout << "nine: " <<count_9<<std::endl;

  return 0;
}

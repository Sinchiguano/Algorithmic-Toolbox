/*
 * search.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;



int main()
{

  std::vector<int> temp = {1,2,3,4,5,6,7,8};
  std::vector<int> aux= { 3,4,5};

  std::vector<int>::iterator it1,it2, it3,it4;


  it1=temp.begin();
  it2=temp.end();

  it3=aux.begin();
  it4=aux.end();


  std::cout << "///////Container 1" << '\n';

  for(it1;it1!=it2;it1++)
  {
    std::cout << "Container 1: " <<*it1<< '\n';
  }
  std::cout << "///////Container 2" << '\n';
  for(it3;it3!=it4;it3++)
  {
    std::cout << "Container 2: " <<*it3<< '\n';
  }

  std::vector<int>::iterator p1,p2,p3,p4;


  p1=temp.begin();
  p2=temp.end();

  p3=aux.begin();
  p4=aux.end();

  //Search...
  std::vector<int>::iterator l;
  l= search(p1,p2,p3,p4);
  std::cout << "/* message */ "<<*l << '\n';
}

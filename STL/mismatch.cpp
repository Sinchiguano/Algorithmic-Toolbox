/*
 * mismatch.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include<iostream>
#include<algorithm>

#include<vector>
#include <utility>      // std::pair, std::make_pair

#include<string>

using namespace std;


bool cmp_string(string i , string j)
{
  return ( i.size() == j.size() );
}

int main()
{

  std::vector<int>myvector1= {1,2,3,4,5,6,7,8};
  std::vector<int>myvector2= {1,2,3,-1,2,1,2,3,4,6,7,8,9};

  std::vector<int>::iterator it11,it12;
  std::vector<int>::iterator it21,it22;

  it11=myvector1.begin();
  it12=myvector1.end();

  it21=myvector2.begin();
  it22=myvector2.end();

  /* defining a pair of iterator to the vector of integer */
  //###############################################
  std::pair<std::vector<int>::iterator,std::vector<int>::iterator> position1;

  position1=mismatch(it11,it12,it21);

  std::cout<<*position1.first<<endl;
  std::cout<<*position1.second<<endl;

  //###############################################

  std::pair<std::vector<int>::iterator,std::vector<int>::iterator> position2;

  position2=mismatch(it11,it12,it21+5);

  std::cout<<*position2.first<<endl;
  std::cout<<*position2.second<<endl;

 /* use of compare function */
  //###############################################

  std::cout << "/* use of compare function */" << '\n';
  std::vector<std::string> map1={"abc", "def", "temp", "testing"};
  std::vector<std::string> map2={"xyz", "emp", "res", "testing"};

  std::pair<std::vector<std::string>::iterator,std::vector<std::string>::iterator> position3;
  std::vector<std::string>::iterator str1b,str2b;
  str1b=map1.begin();
  str2b=map1.end();

  position3=mismatch(str1b,str2b,map2.begin(),cmp_string);

  std::cout << "/* message: */" <<*position3.first<< '\n';
  std::cout << "/* message: */" <<*position3.second<< '\n';

  //position3=mismatch(map1.begin(),map1.end(),map2.begin(),cmp_string);
  std::cout << "By: Casch" << '\n';
}

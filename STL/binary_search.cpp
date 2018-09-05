/*
 * binary_search.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "binary_search.h"

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>


using namespace std;

//IDE integrated development enviroment
//Compile my code
//g++ -std=c++14 -o temp sort.cpp
bool compare_string_by_length (string i,string j)
{
 return (i.size() == j.size());
}

int main ()
{
  //One way
  int inputs[] = {7,8,4,1,6,5,9,4};
  std::cout<<"Size:"<<sizeof(inputs)<<std::endl;
  for (auto i=0;i<8;i++)
  {
    std::cout<<inputs[i]<<std::endl;

  }
  cout<<"  //#####################################\n";
  //Another way to get acces to my classical array!!!
  for (auto i=inputs;i!=inputs+8;i++)
  {
    std::cout<<*i<<std::endl;
  }

  cout<<"  //#####################################\n";
  std::array<int,8> inputss={7,8,4,1,6,5,9,4};

  std::cout<<"Data:"<<inputss.size()<<std::endl;

  for(auto it=inputss.begin();it!=inputss.end();it++)
  {
    std::cout<<*it<<std::endl;
  }

  cout<<"  //#####################################\n";
  std::cout<<"working with vectors\n"<<std::endl;
  std::vector<int> v={7,8,4,1,6,5,9,4};
  std::vector<int>::iterator i=v.begin();
  std::vector<int>::iterator j=v.end();

    for(auto i=v.begin();i!=j;i++)
    {
      std::cout<<*i<<std::endl;
    }

  cout<<"  //#####################################\n";

  cout<<binary_search(i,j , 7 )<<std::endl;  //prints 1 , Boolean true

  cout<<binary_search(i,j , 217)<<std::endl; //prints 0 , Boolean false

  /* compare_function can be used to search
  non numeric elements based on their properties */
  cout<<"  //#####################################\n";

  string s[] = { "test" , "abcdf" , "efghijkl" , "pop" };

  cout<<compare_string_by_length(s[1],s[2])<<std::endl;
  /* search for the string in s which have same length as of "nicky" */

}

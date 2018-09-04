/*
 * partial_sort.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "partial_sort.h"
#include<iostream>
#include<algorithm>
#include<vector>


#include <array>

using namespace std;


//IDE integrated development enviroment
//Compile my code
//g++ -std=c++14 -o temp sort.cpp
bool compare_function(int i, int j);

int main()
{

    int a[9] = {9,8,7,6,5,4,3,2,1};

    partial_sort(a, a+4, a+9);

    for (auto item=0;item<sizeof(a);item++)
    {
        std::cout<<" "<<a[item];
        if (item==8)
        {
         break;
        }
    }
    cout<<"\n";

    std::cout<<"==========================="<<std::endl;


    std::array<int,9> myarray = {9,8,7,6,5,4,3,2,1};
    // cout<<"/////////////////////"<<endl;
    auto i=myarray.end();
    auto tmp=myarray.end()-myarray.begin();
    auto middle=myarray.begin()+(tmp/2);

    // std::cout<<myarray.begin()<<endl;
    // std::cout<<"middle:"<<middle<<endl;

    partial_sort(myarray.begin(),middle, myarray.end());


  std::cout << "myarray contains:\n";
  std::cout<<"==========================="<<std::endl;
  for ( auto it = myarray.begin(); it != myarray.end(); ++it )
    std::cout << ' ' << *it;
  std::cout << '\n';



  //int b[] = {1,5,6,2,4,8,9,3,7};
    //std::array<int,9> b= {9,8,7,6,5,4,3,2,1};
    std::array<int,9> b= {1,5,6,2,4,8,9,3,7};
  
  /* sorts b such that first 4 elements are the greatest elements
   in the array and are in descending order */
  partial_sort(b.begin(),b.begin()+(b.end()-b.begin())/2, b.end(),compare_function);  
  /* now b is  9,8,7,6,1,2,4,3,5 */
  std::cout<<"I am here==========================="<<std::endl;
    for ( auto it = myarray.begin(); it != myarray.end(); ++it )
    std::cout << ' ' << *it;
  std::cout << '\n';
}

bool compare_function(int i, int j)
{
    return i > j;    // return 1 if i>j else 0
}

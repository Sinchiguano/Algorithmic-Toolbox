/*
 * is_sorted.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "is_sorted.h"


#include<iostream>
#include<algorithm>
#include<vector>
#include<array>


using namespace std;


bool compare_function(int i, int j);

int main()
{
  int a[5] = {1,5,8,4,2}; 

  cout<<is_sorted(a, a+5);
  /* prints 0 , Boolean false  */
  
    for(auto i=0;i<sizeof(a);i++)
    {
        std::cout<<a[i]<<std::endl;
        if(i==4) break;
    }

    std::cout<<"================"<<std::endl;
    std::array<int,5> temp = {1,5,8,4,2}; 


    cout<<is_sorted(temp.begin(), temp.end());
    cout<<"False!!!! 0l\n";
    /* prints 0 , Boolean false  */

    for(auto it=temp.begin();it!=temp.end();it++)
    {
    std::cout<<*it<<std::endl;
    //if(i==4) break;
    }

    std::cout<<"================"<<std::endl;
     std::cout<<"================"<<std::endl;
    std::vector<int> v1;

    v1.push_back(8);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(1);

    /* now the vector v1 is 8,4,5,1 */
    std::cout<<is_sorted(v1.begin() , v1.end() )<<std::endl;
    /* prints 0 */
    sort(v1.begin() , v1.end(),compare_function );
    /* sorts the vector v1 */
         std::cout<<"================"<<std::endl;
    std::cout<<is_sorted(v1.begin() , v1.end())<<std::endl;
    /*  prints 1 , as vector v1 is sorted */   
     std::cout<<"================"<<std::endl;
    for(std::vector<int>::iterator it=v1.begin();it!=v1.end();it++)
    {
    std::cout<<*it<<std::endl;
    //if(i==4) break;
    } 
}



bool compare_function(int i, int j)
{
    return i < j;    // return 1 if i>j else 0
}

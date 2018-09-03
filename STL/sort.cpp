/*
 * sort.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//
// #include "sort.h"

//IDE integrated development enviroment

#include<iostream>
#include<algorithm>
#include<vector>
#include <array>


using namespace std;



bool compare_function_tmp(int i, int j);
bool compare_function_aux(int i, int j);
bool compare_string(string i, string j);


//Compile my code
//g++ -std=c++14 -o temp sort.cpp

int main()
{
    int arr[5] = {1,5,8,4,2};

    // sorts arr[0] to arr[4] in ascending order
    sort(arr , arr+5);//
    for (auto i=0;i< sizeof(arr);i++)
    {
        std::cout<<"Data:"<<arr[i]<<std::endl;
        if (i==4)
        {
         break;
        }
    }

    //return 0;

    //#####################################
    //#####################################
    /* Vector class*/
    //Vectors are sequence containers representing arrays that can change in size.

    std::cout<<"Using vectors!!!!"<<std::endl;
    std::vector<int> myvector;

    myvector.push_back(9);
    myvector.push_back(5);
    myvector.push_back(4);
    myvector.push_back(7);
    myvector.push_back(3);

    //Iterator is a simple pointer
    std::vector<int>::iterator i, j;

    i = myvector.begin();   // i now points to beginning of the vector v1
    j = myvector.end();     // j now points to end of the vector v1

    sort(myvector.begin() , myvector.end() ); //can also be used
    //sort(myvector.begin(),myvector.end());
    // sort(i,j);

    for(std::vector<int>::iterator pt=myvector.begin();pt!=myvector.end();pt++)
    {
        std::cout<<"Data:"<<*pt<<std::endl;
    }

    //return  0;


    //#####################################
    //#####################################
    /* Array class*/

    std::array<int,5> myarray = { 2, 16, 77, 34, 50 };

    std::cout << "Using array class :"<<std::endl;

    sort(myarray.begin(),myarray.end());

    for ( auto it = myarray.begin(); it != myarray.end(); ++it )
    {
        std::cout << "Data: "<< *it<<std::endl;

    }

    //return 0;



    //#####################################
    //#####################################
    /* With compare functions*/


    std::array<int,9> tmp = { 4,3,6,5,6,8,4,3,6 };


    // sorts tmp in descending order
    std::cout<<"sorts tmp in descending order\n";
    sort(tmp.begin(),tmp.end(),compare_function_tmp);

    /* here we have used compare_function which uses operator(>),
    that result into sorting in descending order */

    for ( auto it = tmp.begin(); it != tmp.end(); ++it )
    {
        std::cout << "Data: "<< *it<<std::endl;

    }


    // sorts tmp in ascending order
    std::cout<<"sorts tmp in ascending order\n";
    sort(tmp.begin(),tmp.end(),compare_function_aux);

    /* here we have used compare_function which uses operator(>),
    that result into sorting in descending order */

    for ( auto it = tmp.begin(); it != tmp.end(); ++it )
    {
        std::cout << "Data: "<< *it<<std::endl;

    }



    //#####################################
    //#####################################
    /* With compare functions for non-numeric elements*/

    std::cout<<"With compare functions for non-numeric elements\n";

    std::array<string,4> mystring={"a" , "abc", "ab" , "abcde"};

    sort(mystring.begin(),mystring.end(),compare_string);

    for ( auto it = mystring.begin(); it != mystring.end(); ++it )
    {
        std::cout << "Data: "<< *it<<std::endl;

    }
    cout<<"By: Casch..."<<std::endl;
    return 0;

}

bool compare_function_tmp(int i, int j)
{
    return i > j;    // return 1 if i>j else 0
}

bool compare_function_aux(int i, int j)
{
    return i < j;    // return 1 if i<j else 0
}
//#######################################
bool compare_string(string i, string j)
{
    return (i.size() < j.size());
}

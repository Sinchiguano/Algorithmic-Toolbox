/*
 * equal.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <iostream>
#include <algorithm>
#include <vector>

#include<array>


using namespace std;

//g++ -std=c++14 -o temp equal.cpp

bool cmp_string(string i, string j)
{
  return (i.size() == j.size());
}

int main()
{
  //Traditonal array
  int inputs1[] = { 1,2,3,4,5,6,7,8};
  int inputs2[] = { -1,2,1,2,3,4,6,7,8,9};

  vector<int>  v1(inputs1 , inputs1+9 );
  vector<int>  v2(inputs2 , inputs2+10 );

  cout<<equal(v1.begin(), v1.end(), v2.begin()+2)<<std::endl;  // prints 0 , boolean false
  std::cout << "v1.begin(): " <<*(v1.begin())<< '\n';

  //Using just array library ...
  std::array<int,9> myarray1 = { 1,2,3,4,5,6,7,8};
  std::array<int,10> myarray2 = { -1,2,1,2,3,4,6,7,8,9};


  cout<<equal(myarray1.begin(), myarray1.end(), myarray2.begin()+2)<<std::endl;  // prints 0 , boolean false
  std::cout << "myarray1.begin(): " <<*(myarray1.begin())<< '\n';


  //Using vector library
  std::vector<int> myvector1 = { 1,2,3,4,5,6,7,8};
  std::vector<int> myvector2 = { -1,2,1,2,3,4,6,7,8,9};

  std::vector<int>::iterator it1,it2;

  it1=myvector1.begin();
  it2=myvector1.end();

  cout<<equal(it1, it2,myvector2.begin()+2)<<std::endl;  // prints 0 , boolean false
  std::cout << "myvector1.begin(): " <<*(myvector1.begin())<<std::endl;
  std::cout << "myvector1.begin(): " <<*it2<<std::endl;

  //Traditonal manner
  std::cout << "/* message */" << '\n';
  // /* use of compare function */
  string s1[] = { "abc" , "def" , "temp" , "testing" };
  string s2[] = { "xyz" , "emp" , "resr" , "testing" };

  cout<<equal( s1 , s1+4 , s2 , cmp_string)<<"\n";   // prints 1
  /* note that the stings in s1 and s2 are not actually
  equal but still equal() returns 1 , beacause we are defining
  equality of two string by their length in cmp_function */

  //Traditonal manner

  std::cout << "/* Using vectors with string */" << '\n';
  // /* use of compare function */
  std::vector<string> temp1 = { "abc" , "def" , "temp" , "testing" };
  std::vector<string> temp2= { "xyz" , "emp" , "resr" , "testing" };

  std::vector<string>::iterator i1,i2;
  i1=temp1.begin();
  i2=temp1.end();

  //
  cout<<equal( i1,i2,temp2.begin(), cmp_string)<<"\n";   // prints 1
  // /* note that the stings in s1 and s2 are not actually
  // equal but still equal() returns 1 , beacause we are defining
  // equality of two string by their length in cmp_function */

  //By: Casch

  return 0;

}

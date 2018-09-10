
/*
 * containers.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp


#include <iostream>
#include <list>
#include <utility>
#include <algorithm>
#include<string>
#include <tuple>

#include<array>


using namespace std;



int main ()
{
  std::list<int> list1;

  std::pair<int,int> pair1,pair4;    //creats pair of integers
  std::pair<int,string>  pair2;  // creates pair of an integer an a string


  std::vector<int> v;

  for (size_t i = 0; i < 10; i++) { v.push_back(i); }

  for (size_t i = 0; i < 10; i++) { std::cout << v[i]<<" "; }

  std::cout << "\n/* message */" << '\n';
  std::vector<int>::iterator i,j;
  i=v.begin();
  j=v.end();
  std::pair<std::vector<int>::iterator,std::vector<int>::iterator> pair3;

  pair1 = make_pair(1, 2);
  pair2 = make_pair(1, "Studytonight");
  pair3 = make_pair(i,j);
  pair4= make_pair(1, 2);


  if(pair1 == pair4)
  cout<< "Pairs are equal" << endl;
  else
  cout<< "Pairs are not equal" << endl;


  std::cout << "/* message */" << '\n';
  ////////////////////////////////////////////

  std::tuple<int, int, int> tuple1;
  std::tuple<int, std::string, std::string>  tuple2;

  tuple1 = make_tuple(1,2,3);
  tuple2 = make_tuple(1,"Studytonight","Loves You");


  int id;
  std::string first_name, last_name;

  tie(id,first_name,last_name) = tuple2;
  /* ties id, first_name, last_name to first, second and third element of tuple2 */

    std::cout << id <<" "<< first_name <<" "<< last_name<<endl;
  // /* prints 1 Studytonight Loves You  */


  std::cout << "/* message */" << '\n';

  array<int, 4> odd_numbers = { 2, 4, 6, 8 };

  vector<int> l(odd_numbers.begin(),odd_numbers.end());

  for (auto i = l.begin(); i!=l.end(); i++) {std::cout << *i << " "; }

  std::cout << "\n/* message */" << '\n';

  std::cout << odd_numbers.at(2)<<std::endl; // prints 3
  std::cout << odd_numbers.at(3)<<std::endl; // prints 5

  array<int,8> myarray;
  myarray.fill(1);
  std::cout << "/* message */" << '\n';


  for (size_t i = 0; i < myarray.size(); i++) {std::cout << myarray[i] << '\n'; }

  std::cout << "/* message */" << '\n';


  std::array<int,8> a = {1,2,3,4,5,6,7,8};
  std::array<int,8> b = {8,7,6,5,4,3,2,1};

  cout << "a is : ";
  for(int i=0; i < 8; i++) { cout << a[i] <<" "; }

  std::cout << "\n/* message */" << '\n';


  cout << "b is : ";
  for(int i=0; i < 8; i++) { cout << b[i] <<" "; }

  std::cout << "\n\nafter swap" << '\n';

  std::swap(a,b);  // swaps array a and b

  cout << "a is : ";
  for(int i=0; i < 8; i++) { cout << a[i] <<" "; }

  std::cout << "\n/* message */" << '\n';


  cout << "b is : ";
  for(int i=0; i < 8; i++) { cout << b[i] <<" "; }

  std::cout << "\n/* message */" << '\n';


  std::cout << "\n\nvectors" << '\n';


  std::vector<string> myvector(4 , "test");


  #include<vector>
  for (auto u = myvector.begin(); u != myvector.end(); u++) {std::cout << *u<< '\n';}



  v.clear();
  v.push_back(1);  //insert 1 at the back of v
  v.push_back(2);  //insert 2 at the back of v
  v.push_back(4);  //insert 3 at the back of v

  for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
  {
  	cout << *i <<" ";   // for printing the vector
  }
  std::cout << "\n/* message */" << '\n';


  return 0;
}

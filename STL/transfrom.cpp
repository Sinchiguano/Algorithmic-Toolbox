/*
 * transfrom.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int unaryoperation (int a)
{
   return a*2;
}


int main()
{
  std::vector<int> v1,v2,res;

  for(int i=0; i < 10; ++i)
   {
      v2.push_back(i);
      v1.push_back(i*10);
   }

  std::cout << "v1 " <<" v2"<<endl;
  for(int i=0; i < 10; ++i){std::cout << v1[i] <<" - "<<v2[i]<< '\n';}

  /*
  This method performs binary operation on the elements in range [first1,last1]
  with the elements in the range starting with iterator first1 and stores the result in
  range starting from res.
  */

  res.resize(10);

  transform(v2.begin(), v2.end(), res.begin(), unaryoperation);
  /* now res1 is : 2,4,6,8,10,12,14,16,18 */

  std::cout << "v1 " <<" v2"<<" unaryoperation"<<endl;
  for(int i=0; i < 10; ++i){std::cout << v1[i] <<" - "<<v2[i]<<" - "<<res[i]<< '\n';}
}

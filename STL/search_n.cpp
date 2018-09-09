/*
 * search_n.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "search_n.h"
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


// '''
// search(first1, last1, count, value) :
// This method searches for a sequence of count and value in the range
// defined by iterators first1 and last1(last1 is excluded).
// If there is a match an iterator to the first element of the sequence
//  in the range [first1,last1] is returned, else iterator to last1 is returned.
// '''

int main()
{
  std::vector<int> myvector1={1,2,3,4,4,4,8,5,6,6,7,8};
  std::vector<int>::iterator i1,i2,result_ite;

  i1=myvector1.begin();
  i2=myvector1.end();

  //how many time to count 2
  //which number to count

  result_ite = search_n(i1, i2, 2, 6);

  std::cout << "/* message */ " <<*result_ite<< '\n';


}

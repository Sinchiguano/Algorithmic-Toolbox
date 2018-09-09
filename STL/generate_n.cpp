/*
 * generate_n.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;

//g++ -std=c++14 -o temp sort.cpp

int generate_random()
{
 return rand()%50;
}

int main()
{
  srand(time(NULL));

  std::vector<int> v1 , v2;
  v1.resize(10);
  v2.resize(10);

  /* this assign each element a random value generated
  by the generate_random() */
  generate(v1.begin(), v1.end(), generate_random) ;

  for (size_t i = 0; i < v1.size(); i++)
  {
    std::cout << "-----> " <<v1[i]<< '\n';
  }


  std::cout << "/* message */" << '\n';


  /* this assign first 5 elements a random value
  and rest of the elements are unchanged */
  generate_n(v2.begin(), 5, generate_random);
  for (size_t i = 0; i < v2.size(); i++)
  {
    std::cout << "-----> " <<v2[i]<< '\n';
  }

}

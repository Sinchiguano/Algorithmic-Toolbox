/*
 * next_permutation.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main ()
{
  char s[] = "abcd";
  next_permutation(s, s+4);
  std::cout << s << '\n';

  int a[] = {1,2,3,4};

  next_permutation(a, a+4);

  for (size_t i = 0; i <4 ;i++) {
    std::cout << a[i] << '\n';
  }

  return 0;
}

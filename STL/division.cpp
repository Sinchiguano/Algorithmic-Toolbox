/*
 * division.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using namespace std;


//g++ -std=c++14 -o temp

int count_bits(int number);

'''C++ - Decimal to binary converting'''

int main ()
{
  int temp;
  std::cout<<"Enter the number of bits to be counted..."<<std::endl;
  cin>>temp;
  auto aux=count_bits(temp);
  std::cout<<"Number of bits:"<<aux<<std::endl;
  std::cout<<"By: Casch from Ecuador"<<std::endl;

  return 0;
}

int count_bits(int number)
{
  auto counter=0;
  std::string row_string;
  while(number!=0)
  {
    if(number%2==1)
    {
      ++counter;
      row_string='1'+row_string;
    }
    else
    {
      row_string='0'+row_string;
    }
    number/=2;
  }
  std::cout<<"done!"<<std::endl;
  std::cout<<"Number of string: "<<row_string<<"/2"<<endl;
  return counter;

}

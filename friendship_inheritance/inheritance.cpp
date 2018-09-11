/*
 * inheritance.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp
#include <iostream>

using namespace std;

class one
{
  protected:
    int width;
    int height;
  public:
    void set_values (int a, int b)
    {
      width=a;
      height=b;
    }
 };

class two: public one
{
  public:
    int area ()
    {
      return width * height;
    }
 };

class three: public one
{
  public:
    int area ()
    {
      return width * height / 2;
    }
  };

int main ()
{
  two oneOBJ;
  oneOBJ.set_values(5,2);
  std::cout << oneOBJ.area() << '\n';


  three twoOBJ;
  twoOBJ.set_values(2,2);
  std::cout << twoOBJ.area() << '\n';

  return 0;
}

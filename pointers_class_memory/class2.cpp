/*
 * class2.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp

#include <iostream>

using namespace std;

class parents
{
    double radius;
  public:
    parents(double r) : radius(r) { }
    double area() {return radius*radius*3.14159265;}
};

class children
{
    parents base;
    double height;
  public:
    children(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

int main ()
{
  children myObject(10,20);

  std::cout << "volume : " <<myObject.volume()<< '\n';


  return 0;
}

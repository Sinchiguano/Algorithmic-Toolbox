/*
 * class1.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//#include "class1.h"

//g++ -std=c++14 -o temp sort.cpp

#include <iostream>

using namespace std;

class myClass
{
    int width;
    int height;
    double a,b;
  public:
    myClass();
    myClass(double x, double y) :a(x),b(y){}
    myClass(int a,int b)
    {
      width=a;
      height=b;
    }
    void set_values (int a,int b);

    int area(void)
    {
      return width*height;
    }
    double area1(void)
    {
      return a*b;
    }
};
myClass::myClass()
{
  std::cout << "without any parameters!!! " << '\n';
}

//:: scope operator
/*'''
The only difference between defining a member function completely
within the class definition or to just include its declaration
in the function and define it later outside the class,
is that in the first case the function is automatically considered an inline member function by the compiler, while in the second it is a normal (not-inline) class member function. This causes no differences in behavior, but only on possible compiler optimizations.
'''*/
void myClass::set_values (int x, int y)
{
  width = x;
  height = y;
}

int main ()
{
  myClass myObject1;
  myObject1.set_values(10,10);
  std::cout << "Area: " <<myObject1.area()<< '\n';

  myClass myObject2;
  myObject2.set_values(10,2);
  std::cout << "Area: " <<myObject2.area()<< '\n';

  std::cout << "Constructor!!" << '\n';

  // myClass myObject3 {2,2};
  myClass myObject3 (2,2);
  std::cout << "Area with Constructor: " << myObject3.area()<< '\n';

  // myClass myObject3 {2,2};
  myClass myObject4 (2.2,2.2);
  std::cout << "Area with Constructor: " << myObject4.area1()<< '\n';


}

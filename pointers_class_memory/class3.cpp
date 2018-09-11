/*
 * class3.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

// pointer to classes example

//g++ -std=c++14 -o temp sort.cpp

#include <iostream>


using namespace std;

class myClass
{
    int width, height;
  public:
    myClass(int x, int y) : width(x), height(y) {}

    int area(void) ;
};

int myClass::area(void)
{
  return width * height;
}


int main()
{
  myClass myObject1(2,2);
  myClass *pointer1,*pointer2,*pointer3;

  pointer1=&myObject1;

  std::cout << pointer1->area() << '\n';

  pointer2=new myClass(4,4);
  std::cout << "/* message */" << '\n';
  std::cout << pointer2->area() << '\n';

  std::cout << "/* message */" << '\n';
  pointer3 = new myClass[2] { {5,5}, {3,3} };
  std::cout << pointer3->area() << '\n';

  delete pointer2;
  delete[] pointer3;
  return 0;
}

/*
 * virtualmember.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp

#include <iostream>

using namespace std;

class oneBase
{
  protected:
    int width;
    int height;
  public:
    void set_values (int a, int b) { width=a; height=b; }

    virtual int area(){return 0;}
    void print_area() { std::cout << this->area() << '\n'; }

};

class oneRect: public oneBase
{
  public:
    int area() { return width*height; }
};

class oneTrian: public oneBase
{
  public:
    int area() { return width*height/2; }
};

int main ()
{
  //declare objects
  oneBase cerOBJ;
  oneRect rectOBJ;
  oneTrian trianOBJ;

  //pointers from the base
  oneBase *pointer0=&cerOBJ;
  oneBase *pointer1=&rectOBJ;
  oneBase *pointer2=&trianOBJ;

  pointer0->set_values(2,4);
  pointer1->set_values(4,5);
  pointer2->set_values(4,5);

  std::cout << "/* message */" << '\n';
  std::cout << cerOBJ.area() << '\n';
  std::cout << rectOBJ.area() << '\n';
  std::cout << trianOBJ.area() << '\n';

  std::cout << "/* message */" << '\n';
  std::cout << pointer0->area() << '\n';
  std::cout << pointer1->area() << '\n';
  std::cout << pointer2->area() << '\n';

  std::cout << "/* message */" << '\n';
  std::cout << pointer0->print_area() << '\n';
  std::cout << pointer1->print_area() << '\n';
  std::cout << pointer2->print_area() << '\n';

  return 0;
}

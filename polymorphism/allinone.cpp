/*
 * allinone.cpp
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
    oneBase (int a, int b)
    {
      width=a;
      height=b;
    }

    virtual int area(){return 0;}

    void print_area() { std::cout << this->area() << '\n'; }

};

class oneRect: public oneBase
{
  public:
    //constructor
    oneRect(int a, int b):oneBase (a, b){}
    ///////
    int area() { return width*height; }
};

class oneTrian: public oneBase
{
  public:
    //constructor
    oneTrian(int a, int b):oneBase (a, b){}
    //////
    int area() { return width*height/2; }
};

int main ()
{
  //pointers from the base

  oneBase *pointer1=new oneRect (4,5);
  oneBase *pointer2=new oneTrian (4,5);;

  std::cout << "/* message */" << '\n';

  std::cout << pointer1->print_area() << '\n';
  std::cout << pointer2->area() << '\n';

  delete pointer1;
  delete pointer2;

  return 0;
}

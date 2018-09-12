/*
 * pointersbaseclass.cpp
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
  oneRect rectOBJ;
  oneTrian trianOBJ;

  //pointers from the base
  oneBase *pointer1=&rectOBJ;
  oneBase *pointer2=&trianOBJ;

  pointer1->set_values(1,5);
  pointer2->set_values(2,4);

  // //set values to the objects
  // rectOBJ.set_values(1,5);
  // trianOBJ.set_values(7,9);
/*
But because the type of ppoly1 and ppoly2 is pointer to Polygon
(and not pointer to Rectangle nor pointer to Triangle),
only the members inherited from Polygon can be accessed,
and not those of the derived classes Rectangle and Triangle.
That is why the program above accesses the area members of both objects using rect and trgl directly, instead of the pointers; the pointers to the base class cannot access the area members.
*/
  std::cout << "/* message */" << '\n';
  std::cout << rectOBJ.area() << '\n';
  std::cout << trianOBJ.area() << '\n';
  return 0;
}

/*
 * friend_class.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp
#include <iostream>

using namespace std;

class child;

class parents
{
    int width, height;
  public:
    int area ()
      {return (width * height);}
    void convert (child a);
};

class child
{
  friend class parents;
  private:
    int side;
  public:
    child (int a) : side(a) {}
};

void parents::convert (child a)
{
  width = a.side;
  height = a.side;
}

int main () {
  parents rect;
  child sqr (4);
  rect.convert(sqr);
  std::cout << "/* message */" << '\n';
  std::cout << rect.area() << '\n';
  return 0;
}

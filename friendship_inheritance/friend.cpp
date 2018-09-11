/*
 * friend.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */


//g++ -std=c++14 -o temp sort.cpp
#include <iostream>

using namespace std;

class myClass
{
    int width, height;
  public:
    myClass() {}
    myClass (int x, int y) : width(x), height(y) {}

    int area()
    {
      return width * height;
    }
    myClass something_1 (const myClass & tmp);

    void messages_values()
    {
      std::cout << "/* message */" << '\n';
      std::cout << width<<" "<<height << '\n';
      std::cout << "/* message */" << '\n';
    }
};

myClass myClass::something_1 (const myClass& tmp)
{
  myClass res;
  res.width = tmp.width*2;
  res.height = tmp.height*2;
  return res;
}

int main ()
{
  myClass myObject1(3,2);
  myClass myObject2;
  myClass myObject3;

  std::cout << myObject1.area()<<endl;
  myObject3= myObject2.something_1(myObject1);

  myObject3.messages_values();
  std::cout << myObject3.area() << '\n';

  return 0;
}

/*
 * Operator_Overloading.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */



// CPP program to illustrate
// Operator Overloading
//g++ -std=c++14 -o temp sort.cpp
#include<iostream>
#include <utility>


using namespace std;

class classSEV
{
  private:
    int real;
    int img;

  public:
    //Constructor...
    classSEV(int r = 0, int i =0)
    {
      real = r;
      img = i;
    }

    void simpleMessage()
    {
      std::cout << "real: "<<real<<" img: "<<img<< '\n';
    }



    // This is automatically called when '+' is used with
    // between two Complex objects
    classSEV operator + (classSEV const& obj)
    {
      classSEV res;

      res.real = real + obj.real;
      res.img = img + obj.img;
      return res;
    }

    void print() { cout << real << " + i" << img << endl; }


    std::pair<int,int> retrievValues()
    {
      std::pair <int,int> myValues;
      myValues = std::make_pair (real,img);
      return myValues;
    }
};

int main()
{
    classSEV c1(10, 5);
    classSEV c2(2, 4);

    c1.simpleMessage();
    c2.simpleMessage();

    std::cout << "========================" << '\n';
    std::pair<int,int> myTemp=c1.retrievValues();

    std::cout << myTemp.first << '\n';
    std::cout << myTemp.second << '\n';
    std::cout << "========================" << '\n';

    std::cout << "/* message */" << '\n';
    classSEV c3 = c1 + c2; // An example call to "operator+"
    c3.simpleMessage();
}

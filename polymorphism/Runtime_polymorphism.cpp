/*
 * Runtime_polymorphism.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp


// C++ program for function overriding

#include<iostream>

using namespace std;


// Base class
class Parent
{
    public:
      void simpleMessage()
      {
        std::cout << "The Parent print function was called" << std::endl;
      }
};


// Derived class
class Child : public Parent
{
    public:
      // definition of a member function already present in Parent
      void simpleMessage()
      {
        std::cout << "The child print function was called" << std::endl;
      }

};

//main function
int main()
{
    //object of parent class
    Parent obj1;

    //object of child class
    Child obj2;// = Child();


    // obj1 will call the print function in Parent
    obj1.simpleMessage();

    // obj2 will override the print function in Parent
    // and call the print function in Child
    obj2.simpleMessage();
    return 0;
}

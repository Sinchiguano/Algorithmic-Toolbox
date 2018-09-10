/*
 * Compile_time_Polymorphism.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//Compile time polymorphism: This type of polymorphism is achieved by function overloading or operator overloading.
//#include "Compile_time_Polymorphism.h"


//g++ -std=c++14 -o temp sort.cpp


/*The word polymorphism means having many forms.
In simple words, we can define polymorphism as
the ability of a message to be displayed in more than one form.*/
// C++ program for function overloading

//#include <bits/stdc++.h>

#include<iostream>


using namespace std;

//Function Overloading in C++
//Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.

class cesarClass
{
  public:
    // function with 1 int parameter
    void func(int x){cout << "I am an integer --> x: " << x << endl;}

    // function with same name but 1 double parameter
    void func(double x){cout << "I am a double --> x: " << x << endl;}

    // function with same name and 2 int parameters
    void func(int x, int y){cout << "here two integers: x: " << x << " - y: " << y << endl;}
};

int main()
{
  cesarClass myOBJ;


  // Which function is called will depend on the parameters passed
  // The first 'func' is called
  myOBJ.func(7);

  // // The second 'func' is called
  myOBJ.func(9.132);

  // // The third 'func' is called
  myOBJ.func(85,64);
  return 0;
}
// In the above example, a single function named func acts differently
// in three different situations which is the property of polymorphism.

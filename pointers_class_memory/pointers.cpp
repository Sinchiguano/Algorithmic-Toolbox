/*
 * pointers.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp

#include<iostream>


void something_1();
void something_2();
void something_3();

void increment_all (int* start, int* stop)
{
  int * tmp=start;
  while (start!= stop)
  {
    ++(*start);  // increment value pointed
    ++(*start);
    ++start;     // increment pointer
  }
  for (auto i=tmp;i!=stop;i++)
  {
    std::cout <<*i << '\n';
  }
}

void print_all (const int* start, const int* stop)
{
  const int * tmp = start;
  while (tmp != stop)
  {
    std::cout << *tmp << '\n';
    ++tmp;     // increment pointer
  }
}
////////////////////////////////////
int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functionPointers)(int a,int b))
{
  int g;
  g = (*functionPointers)(x,y);
  return g;
}

int main(int argc, char const *argv[])
{
  //something_1();
  //something_2();

  // std::cout << "pointers and arrays" << '\n';
  // something_3();
  // int x;
  // int y = 10;
  //
  // const int * p = &y;
  // x = *p;          // ok: reading p
  // std::cout << x << '\n';
  // //*p = x;

  // int numbers[] = {10,20,30};
  // increment_all (numbers,numbers+3);
  // std::cout << "/* message */" << '\n';
  // print_all (numbers,numbers+3);
  int m;


  m = operation (7, 5, addition);
  std::cout << m << '\n';
  m = operation (7, 5, subtraction);
  std::cout << m << '\n';

  // std::cout << out of the scope << '\n';
  // int (*myminus)(int a,int b) = subtraction;
  // auto n= operation (20, 8, myminus);
  // std::cout <<n;
  return 0;
}
void something_3()
{
  int numbers[5];
  int * p;

  p = numbers;
  *p = 10;
  std::cout << numbers[0] << '\n';

  p++;
  *p = 20;
  std::cout << numbers[1] << '\n';

  p = &numbers[2];
  *p = 30;

  p = numbers + 3;
  *p = 40;

  p = numbers;
  *(p+4) = 50;

  for (int n=0; n<5; n++) {std::cout << numbers[n] << ", ";}
  std::cout << "\n/* message */" << '\n';
}

void something_2()
{
  int firstvalue = 5;
  int secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue

  std::cout << *p1 << '\n';
  std::cout << *p2 << '\n';

  std::cout << "/* message */" << '\n';

  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1

  std::cout << *p1 << '\n';
  std::cout << *p2 << '\n';

  std::cout << "/* message */" << '\n';
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20

  std::cout << *p1 << '\n';
  std::cout << *p2 << '\n';

  std::cout << "/* message */" << '\n';

}

void something_1()
{
  int firstvalue;
  int secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;

  mypointer = &secondvalue;
  *mypointer = 20;

  std::cout << "firstvalue is " << firstvalue << '\n';
  std::cout << "secondvalue is " << secondvalue << '\n';

  std::cout << *mypointer << '\n';
}

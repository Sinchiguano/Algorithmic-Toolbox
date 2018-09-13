/*
 * stack.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp

#include <iostream>
#include <stack>
#include <queue>



using namespace std;

int main ()
{
  std::stack<int> s;   // creates an empty stack of integer s

  s.push(2);   // pushes 2 in the stack  , now top =2
  s.push(3);   // pushes 3 in the stack  , now top =3

std::cout << "/* message */" << '\n';

    while (!s.empty())
    {
      std::cout<<s.top()<<endl;
      s.pop();
    }
std::cout << "/* message */" << '\n';

  std::stack<int> p;

  // pushing elements into stack
  p.push(2);
  p.push(3);
  p.push(4);

  cout << p.top()<<endl;   // prints 4, as 4 is the topmost element

  cout << p.size()<<endl;  // prints 3, as there are 3 elements in


  std::cout << "/* message */" << '\n';
  std::queue <int> q;   // creates an empty queue of integer q

  q.push(2);   // pushes 2 in the queue  , now front = back = 2
  q.push(3);   // pushes 3 in the queue  , now front = 2 , and back = 3

  priority_queue<int> pq1;
  std::cout << "/* message */" << '\n';
  pq1.push(30);  // inserts 30 to pq1 , now top = 30
  pq1.push(40);  // inserts 40 to pq1 , now top = 40 ( maxinmum element)
  pq1.push(90);  // inserts 90 to pq1 , now top = 90
  pq1.push(60);	// inserts 60 to pq1 , top still is 90

  std::cout<<pq1.top()<<endl;
  pq1.pop();  // removes 90 ( greatest element in the queue

  return 0;

}

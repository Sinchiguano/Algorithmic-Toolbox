/*
 * list_map_stack_queue.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
//g++ -std=c++14 -o temp sort.cpp


#include <iostream>
#include <list>


bool compare_function( std::string& s1 , std::string& s2 );

int main()
{
  int myints[] = {75,23,65,42,13};
  std::list<int> mylist (myints,myints+5);

  std::cout << "mylist contains:"<<std::endl;

  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it) std::cout << *it<< '\n';


  std::list<int>::iterator it;
  it=mylist.begin();
  ++it;

  std::cout << "/* message */" << '\n';

  mylist.insert (it,100);  // insert 100 in second position

  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it) std::cout << *it<< '\n';

  std::cout << "/* message */" << '\n';

  mylist.insert (it,2,20);

  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it) std::cout << *it<< '\n';

  std::cout << "/=============* message */" << '\n';


  std::list<int> l{1,2,3,4,5};
  for (auto it=l.begin(); it != l.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;
  std::cout << "/* message */" << '\n';

  l.push_back(6);
  l.push_back(7);
  for (auto it=l.begin(); it != l.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;
  /* now the list becomes 1,2,3,4,5,6,7 */
  std::cout << "/* message */" << '\n';


  l.push_front(8);
  l.push_front(9);
  /* now the list becomes 9,8,1,2,3,4,5,6,7 */
  for (auto it=l.begin(); it != l.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;

  std::cout << "/* message */" << '\n';



  std::list<int> list1 = {2,4,5,6,1,3};
  std::list<std::string> list2 = {"h" , "hhh" , "hh"};

  list1.sort();
  for (auto it=list1.begin(); it != list1.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;

  std::cout << "/* message */" << '\n';
  list2.sort(compare_function);
  for (auto it=list2.begin(); it != list2.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;

  /////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////
  std::cout << "/* message */" << '\n';
  std::cout << "/* message */" << '\n';

  list1.clear();
  list2.clear();

  list1 = {1,2,3,4};
  std::list<int> list3 = {0,5,6,7,8,0};
  for (auto it=list1.begin(); it != list1.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;
  for (auto it=list3.begin(); it != list3.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;

  std::cout << "/* message */" << '\n';

  std::list<int>::iterator m;

  m = list1.begin();
  ++m;   //pointing to second position
    ++m;

  list1.splice(m, list3);
  for (auto it=list1.begin(); it != list1.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;


  // /* transfer all elements of list2 at position 2 in list1 */
  // /* now list1 is 1 5 6 7 8 2 3 4 and list2 is empty */
  //
  // list2.splice(list2.begin(), list1, it);
  // /* transfer element pointed by it in list1 to the beginning of list2 */
  // /* list2 is now 5 and list1 is 1 6 7 8 2 3 4*/

  std::cout << "/* message */" << '\n';
  std::cout << "/* message */" << '\n';

  list1.clear();
  list3.clear();

  list1 = {1,3,5,7,9};
  list3 = {2,4,6,8,10};

  /* both the lists are sorted. In case they are not ,
    first they should be sorted by sort function() */

  list1.merge(list3);

  /* list list1 is now 1,2,3,4,5,6,7,8,9,10  */

  for (auto it=list1.begin(); it != list1.end(); ++it) std::cout << *it<<" ";
  std::cout<<std::endl;

}

bool compare_function( std::string& s1 , std::string& s2 )
{
  return ( s1.length() > s2.length() );
}

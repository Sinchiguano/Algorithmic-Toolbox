/*
 * Creating_Map.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

//g++ -std=c++14 -o temp sort.cpp
#include <iostream>
#include <map>

using namespace std;

int main ()
{
  std::map<int,int> m{ {1,2} , {2,3} , {3,4} };
  /* creates a map m with keys 1,2,3 and
  their corresponding values 2,3,4 */

  // show content:
  for (std::map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  std::cout << "/* message */" << '\n';

  /*  creates a map with keys of type character and
  values of type integer */
  std::map<string,int> map1;

  map1["abc"]=100;    // inserts key = "abc" with value = 100
  map1["b"]=200;      // inserts key = "b" with value = 200
  map1["c"]=300;      // inserts key = "c" with value = 300
  map1["def"]=400;    // inserts key = "def" with value = 400



  for (std::map<std::string,int>::iterator it=map1.begin(); it!=map1.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  std::cout << "/* message */" << '\n';
  std::map<string,int> map2 (map1.begin(), map1.end());

  for (auto it=map2.begin(); it!=map2.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  ////////////////////
  ///////////////////
  std::cout << "/* message */" << '\n';
  std::cout << "/* message */" << '\n';


  std::map<int,string> l={ {1,"nikhilesh"} , {2,"shrikant"} , {3,"ashish"} };



  cout << l.at(1) ;  // prints value associated with key 1 ,i.e nikhilesh
  cout << l.at(2) ;  // prints value associated with key 2 ,i.e shrikant

  std::cout << "\n/* message */" << '\n';

  cout << l[3]<<endl ; // prints value associated with key 3 , i.e ashish



  l.at(1) = "vikas";   // changes the value associated with key 1 to “vikas”
  l[2] = "navneet";   // changes the value associated with key 2 to “navneet”

  l[4] = "doodrah";
  /* since there is no key with value 4 in the map,
        it insert a key-value pair in map with key=4 and value = “doodrah” */



  for (auto it=l.begin(); it!=l.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

  std::cout << "/* message */" << '\n';


  std::map<int,int> mm{{1,2} , {2,3} , {3,4} };

  mm.insert( pair<int,int> (4,5));
  /* inserts a new entry of key = 4 and value = 5 in map m */

  /* make_pair() can also be used for creating a pair */
  mm.insert( make_pair(5, 6));
  /* inserts a new entry of key = 5 and value = 6 */


  for (auto it=mm.begin(); it!=mm.end(); ++it)
    std::cout << it->first << " => " << it->second << endl;
  //
  std::map<int,int>::iterator i , j;

  i = mm.find(2);    // points to entry having key =2
  j = mm.find(5);    // points to entry having key =5

  std::cout << i->first << '\n';
  std::cout << i->second << '\n';

}

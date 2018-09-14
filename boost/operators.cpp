/*
 * operators.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */
#include <boost/operators.hpp>
#include <string>
#include <utility>
#include <iostream>


#include <boost/random.hpp>
#include <ctime>
#include <cstdint>


//g++ -std=c++14 -o temp sort.cpp

class myClass : public boost::less_than_comparable<myClass>
{
public:
  std::string name;
  int legs;

  //Constructor...
  myClass(std::string n, int l) : name{std::move(n)}, legs{l} {}

  //operators
  bool operator<(const myClass& tmp1) const { return legs < tmp1.legs; }
};


int main()
{
  // myClass a1{"cat", 4};
  // myClass a2{"spider", 8};
  myClass a1("cat", 4);
  myClass a2("spider", 8);

  std::cout << "/* message */" << '\n';
  std::cout << std::boolalpha << (a2 < a1) << '\n';

  std::cout << "random" << '\n';
  std::time_t now = std::time(0);
  // std::cout << now << '\n';
  boost::random::mt19937 gen{static_cast<std::uint32_t>(now)};
  boost::random::uniform_int_distribution<> dist{1, 75};
  std::cout << dist(gen) << '\n';

}

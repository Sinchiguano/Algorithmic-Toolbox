/*
 * pairwise.cpp
 * Copyright (C) 2018 CESAR SINCHIGUANO <cesarsinchiguano@hotmail.es>
 *
 * Distributed under terms of the BSD license.
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

//g++ -std=c++14 -o temp sort.cpp

using namespace std;


int max_pair_wise(const std::vector<int>& v);

bool compare_function(int i, int j)
{
    return i > j;    // return 1 if i>j else 0
}

int main()
{
  /* code */
  int n;
  std::cout<<"Sinchiguano Cesar\n";
  std::cout<<"How many numbers do you want to create your vector!!!\n";
  std::cin>>n;

  //Dynamic array
  std::vector<int> myvector;

  int aux;
  for (auto i=0;i<n;++i )
  {
    std::cin>>aux;
    myvector.push_back(aux);
  }


  cout<<"===================\n";
  for (auto i=myvector.begin();i!=myvector.end();++i)
  {
    cout<<*i<<" ";

  }
  cout<<"\n";
    cout<<"===================\n";

  std::vector<int>::iterator i,j;
  i=myvector.begin();
  j=myvector.end();
  sort(i ,j,compare_function);
    cout<<"\nsorted===================\n";
  for (auto i=myvector.begin();i!=myvector.end();++i)
  {
    cout<<*i<<" ";
  }
  cout<<"\n"<<endl;
  std::cout<<"Max pair-wise product: "<<myvector[0]*myvector[1]<<std::endl;


  //Another way to do it
  auto temp=max_pair_wise(myvector);
  std::cout<<"with for loop... Result:"<<temp<<std::endl;
    std::cout<<"\nBy:Casch..."<<endl;
  return 0;
}


int max_pair_wise(const std::vector<int>& v)
{
  int result=0;
  int n=v.size();
  cout<<"Number of elements:"<<n<<endl;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(v[i]*v[j]>result)
      {
        result=v[i]*v[j];
      }
    }
  }
  return result;
}

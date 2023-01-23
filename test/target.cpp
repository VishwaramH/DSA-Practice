#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int tar,val;
  std::cin>>tar;
  int sum=0,turns=0;
  while(sum<tar) {
    std::cin>>val;
    sum += val;
    turns++;
  }
  std::cout<<"The number of turns is "<<turns;
  return 0;
}
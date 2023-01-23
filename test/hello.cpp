#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int x1,y1,x2,y2,x3,y3;
  std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
  std::cout<<(float)(x1+x2+x3)/3<<"\n"<<(float)(y1+y2+y3)/3;
  return 0;
}
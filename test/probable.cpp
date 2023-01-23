#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int num,odd=0,even=0,rem;
  std::cin>>num;
  while(num>0){
    rem %= 10;
    if(rem%2==0){
      even += rem;
    }
    else{
      odd += rem;
    }
    num /=10;
  }
  if(odd == even) 
    std::cout<<"Yes";
  else
    std::cout<<"No";
  return 0;
}
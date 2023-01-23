// addition of two numbers using bitwise operators
#include<iostream>
int Add(int, int);
int main()  
{  
    int r,a;
    std::cin>>r>>a;
    std::cout<< Add(r,a);  // 0 1 0 1
    return 0;              // 0 1 1 0
}                          // 0 1 0 0 carr
int Add(int x, int y)      // 0 0 1 1
{                          // 1 0 0 0
    int carry;
    while (y != 0)  
    {  
        carry = x & y;
        x = x^y;
        y = carry<<1;
    }  
    return x;  
}  
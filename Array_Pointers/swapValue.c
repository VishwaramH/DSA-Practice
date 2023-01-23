#include<stdio.h>

void swapValue(int n1, int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Values in swap() function after swapping: %d %d\n", n1,n2);
}

int main() 
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("Values in main before swapping: %d %d\n",num1, num2);
    swap(num1,num2);  // call by value
    printf("Values in main after swapping: %d %d\n",num1,num2);  // no reflection from swap function takes place
    return 0;
}
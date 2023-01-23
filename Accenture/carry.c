#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum = num1+num2;
    int carry=0,rem1,rem2,val=0;
    while(num1>0 || num2>0) 
    {
        rem1 = num1%10;
        rem2 = num2%10;
        if(rem1+rem2+val>9) {
            val = rem1+rem2-10; 
            carry++;
        }
        num1/=10;
        num2/=10;
    }
    printf("sum=%d\nno of carries=%d",sum,carry);
}
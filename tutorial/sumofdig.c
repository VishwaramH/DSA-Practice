// 10342 = 10
// 10342 % 10 = 2
// sum = 0 + 2;
// 10342/10 = 1034
#include<stdio.h>
int main()
{
    long long int num,sum=0,rem;
    scanf("%lld",&num);
    while(num!=0) {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    printf("sum is: %lld",sum);
    return 0;

}
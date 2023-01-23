#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a==b && b==c && a==c)) {
        printf("equilateral");
    }
    else if(a==b || b==c || a==c) {
        printf("isosceles");
    }
    else if(a+b<=c || b+c<=a || a+c<=b){
        printf("invalid");
    }
    else if(a!=b && b!=c && a!=c) {
        printf("scalene");
    }
    return 0;
}
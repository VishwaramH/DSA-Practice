#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    // printf("%d",INT_MAX);
    // printf("%ld",LONG_MAX);
    scanf("%d",&n);
    if(n<=INT_MAX || n<=(-INT_MAX)) {
        printf("I");
    }
    else {
        printf("L");
    }
    return 0;
}
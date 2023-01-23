#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;   // single pointer 
    int **st;   // double
    int a = 10;  // normal
    ptr = &a;
    st = &ptr;
    *ptr = 50;
    printf("%d %d %d",a,ptr,*st); // 
    return 0;
}
#include<stdio.h>
void cyclicswap(int *a,int *b,int *c){ // consider 1 2 3
    int temp;
    temp = *b;  // temp = 2
    *b = *a;    // *b = 1
    *a = *c;    // *a = 3
    *c = temp;  // *c = 2
}
int main()
{
    int a,b,c;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Values before cyclic swapping:\n%d %d %d\n",a,b,c); // 1 2 3
    cyclicswap(&a,&b,&c); // call by reference
    printf("Values after cyclic swapping:\n%d %d %d\n",a,b,c); // 3 1 2
    return 0;
}
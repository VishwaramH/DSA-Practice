#include<stdio.h>
int main() {
    int num,range,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the range:\n");
    scanf("%d",&range);
    for(i=1;i<=range;i++) {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
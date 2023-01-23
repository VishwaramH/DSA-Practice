#include<stdio.h>
int main() {
    int num,count=0,temp;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while(num!=0) {
        num = num/10;
        count++;
    }
    printf("The number of digits in %d is: %d",temp,count);
}
#include<stdio.h>
int main() {
    int num,rev=0,rem,temp;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp = num;
    while(num!=0) {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("Reverse of %d is: %d",temp,rev);
}
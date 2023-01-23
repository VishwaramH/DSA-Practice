#include<stdio.h>
int main() {
    int num,temp,rem,result=0;
    printf("Enter a three digit number:\n");
    scanf("%d",&num);
    temp = num;
    while(temp!=0) {
        rem = temp%10;  // to get the last digit in a number
        result = result + (rem*rem*rem);  // sum of the cube of a number
        temp = temp/10;  // removing the last digit
    }
    if(result==num) {
        printf("%d is an Armstrong number\n",num);
    }
    else {
        printf("%d is not an Armstrong number\n",num);
    }
    return 0;
}
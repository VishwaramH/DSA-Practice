#include<stdio.h>
int hcf(int num1,int num2) {
    if(num2!=0) {
        return hcf(num2,num1 % num2);
    }
    else {
        return num1;
    }
}
int main() {
    int num1,num2;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("HCF of %d and %d is: %d\n",num1,num2,hcf(num1,num2));
}
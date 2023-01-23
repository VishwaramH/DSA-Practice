#include<stdio.h>
int fact(int num) {
    if(num<=1) {
        return 1;
    }
    else {
        return num * fact(num-1);
    }
}
int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Factorial of %d is: %d\n",num,fact(num));
}
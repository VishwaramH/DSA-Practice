#include<stdio.h>
int sum(int num) {
    if(num==1) {
        return num;
    }
    else {
        return num + sum(num-1);
    }
}
int main() {
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Sum of first %d numbers is: %d",num,sum(num));
}
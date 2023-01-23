#include<stdio.h>
int main() {
    int num1,num2,min,hcf,lcm,i;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    min = (num1>num2) ? num1 : num2;
    while(1) {
        if(min%num1==0 && min%num2==0) {
            printf("LCM of %d and %d is: %d",num1,num2,min);
            break;
        }
        min++;
    }

    // lcm using hcf
    // for(i=1;i<=num1 && i<=num2;i++) {
    //     if(num1%i==0 && num2%i==0) {
    //         hcf = i;
    //     }
    // }    
    // lcm = num1*num2/hcf;
    // printf("LCM of %d and %d is: %d",num1,num2,lcm);
    return 0;
}
#include<stdio.h>
int main() {
    int num1,num2,i,hcf,temp1,temp2;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&num1,&num2);
    // using for loop
    for(i=1;i<=num1 && i<=num2;i++) {
        if(num1%i==0 && num2%i==0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n",num1,num2,hcf);   

    //using while loop
    // temp1 = num1,temp2 = num2;
    // while(num1!=num2) {
    //     if(num1>num2) {
    //         num1-=num2;
    //     }
    //     else {
    //         num2-=num1;
    //     }
    // }
    // printf("HCF of %d and %d is: %d",temp1,temp2,num1);
    return 0;
}
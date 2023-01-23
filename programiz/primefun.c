// prime numbers between given 2 intervals
#include<stdio.h>
#include<math.h>

int checkPrime(int num) {
    int flag=1,i,max;
    max = sqrt(num);
    for(i=2;i<=max;i++) {
        if(num%max==0) {
            return 0;
        }
        else if(num%i==0) {
            return 0;
        }
    }
    return flag;
}

int main() {
    int num1,num2,flag,i;
    printf("Enter the two intervals:\n");
    scanf("%d %d",&num1,&num2);
    printf("The prime numbers between %d and %d are:\n",num1,num2);
    for(i=num1+1;i<num2;i++) {
        flag = checkPrime(i);
        if(flag==1) {
            printf("%d ",i);
        }   
    }
    return 0;
}
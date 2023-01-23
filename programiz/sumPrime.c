// program to check whether an integer is expressed as a sum of primes
#include<stdio.h>
#include<math.h>
int checkPrime(int num) {
    int i;
    int isPrime = 1;
    for(i=2;i<=sqrt(num);i++) {
        if(num%i==0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
int main() {
    int num,i;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++) {
        if(checkPrime(i)==1) {
            if(checkPrime(num-i)==1) {
                printf("%d = %d + %d\n",num,i,num-i);
            }
        }
    }
    return 0;
}